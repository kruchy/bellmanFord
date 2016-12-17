//
// Created by Krzysiek on 2016-11-19.
//

#include <queue>
#include <map>
#include "FordFulkersonAlgorithm.h"

FordFulkersonAlgorithm::FordFulkersonAlgorithm(vector<Vertex *> vertices, vector<Edge *> edges, Vertex *start,
                                               Vertex *end) {


    int u, v;

    int max_flow = 0;
    map<Vertex *, Vertex *> previous;
    while (hasAugmentingPath(edges, edges[0]->start, edges[edges.size() - 1]->end, &previous)) {
        Vertex *current = previous[end];
        Edge *edge;
        for (int i = 0; i < edges.size(); i++) {
            if (edges[i]->start == current && edges[i]->end == end) {
                edge = edges[i];
            }
        }
        Vertex second;

        int min = INT_MAX;
        do {
            min = (min > edge->weight) ? edge->weight : min;
            second = (*edge->start);
            Vertex *first = previous[edge->start];
            if (first != nullptr)
                for (int i = 0; i < edges.size(); i++) {
                    if (edges[i]->start->number == first->number && edges[i]->end->number == edge->start->number) {
                        edge = edges[i];
                        break;
                    }
                }
        } while (second.number != start->number);

        for (int i = 0; i < edges.size(); i++) {
            if (edges[i]->start->number == previous[end]->number && edges[i]->end->number == end->number) {
                edge = edges[i];
            }
        }
        int w = 0;
        Vertex *first;
        Vertex *sec;
        do {

            edge->weight -= min;
            if (edge->weight == 0) {
                vector<Edge *>::iterator it = edges.begin();
                for (it; it != edges.end(); it++)
                    if ((*it) == edge)
                        edges.erase(it);
                edges.push_back(new Edge(edge->end, edge->start, edge->weight));
            }
            w += min;
            first = previous[edge->start];
            sec = edge->start;
            if (first != nullptr)
                for (int i = 0; i < edges.size(); i++) {
                    if (edges[i]->start->number == first->number && edges[i]->end->number == edge->start->number) {
                        edge = edges[i];
                    }
                }
        } while (sec->number != start->number);


        max_flow += min;


    }

    this->f = max_flow;

}

bool FordFulkersonAlgorithm::hasAugmentingPath(vector<Edge *> edges, Vertex *start, Vertex *end,
                                               map<Vertex *, Vertex *> *previous) {
    std::map<Vertex *, bool> visitedVertices;

    for (int i = 0; i < edges.size(); i++) {
        visitedVertices[edges[i]->start] = false;
        visitedVertices[edges[i]->end] = false;
    }
    queue<Vertex *> q;
    q.push(start);
    (*previous)[start] = nullptr;
    visitedVertices[start] = true;
    while (!q.empty()) {
        Vertex *ver = q.front();
        q.pop();
        for (int i = 0; i < edges.size(); i++) {
            Edge *cur = edges[i];
            if (ver == cur->start && !visitedVertices[cur->end] && cur->weight > 0) {
                visitedVertices[cur->end] = true;
                (*previous)[cur->end] = ver;
                q.push(cur->end);
            }
        }
    }


    return visitedVertices[end];
}


FordFulkersonAlgorithm::FordFulkersonAlgorithm(vector<vector<int>> matrix, int start, int end) {

    int u, v;


    vector<vector<int>> residualMatrix = copyMatrix(matrix);

    int previous[matrix.size()];
    int max_flow = 0;
    while (hasAugmentingPath(residualMatrix, start, end, previous)) {

        int path_flow = INT_MAX;
        for (v = end; v != start; v = previous[v]) {
            u = previous[v];
            if (path_flow > residualMatrix[u][v])
                path_flow = residualMatrix[u][v];
        }


        for (v = end; v != start; v = previous[v]) {
            u = previous[v];
            residualMatrix[u][v] -= path_flow;
            residualMatrix[v][u] += path_flow;
        }


        max_flow += path_flow;
    }

    this->f = max_flow;
};

bool FordFulkersonAlgorithm::hasAugmentingPath(vector<vector<int>> matrix, int start, int end, int *previous) {
    bool visited[matrix.size()];
    for (int i = 0; i < matrix.size(); i++) {
        visited[i] = false;
    }
    queue<int> q;
    q.push(start);
    visited[start] = true;
    previous[start] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v = 0; v < matrix.size(); v++) {
            if (!visited[v] && matrix[u][v] > 0) {
                q.push(v);
                previous[v] = u;
                visited[v] = true;
            }
        }
    }

    return visited[end];
}


vector<vector<int>> FordFulkersonAlgorithm::copyMatrix(vector<vector<int> > matrix) {
    vector<vector<int>> temp = vector<vector<int>>(matrix.size());
    for (int i = 0; i < matrix.size(); i++) {
        temp[i] = vector<int>(matrix.size());
    }

    for (int u = 0; u < matrix.size(); u++) {

        for (int v = 0; v < matrix.size(); v++) {
            temp[u][v] = matrix[u][v];
        }
    }
    return temp;
}

string FordFulkersonAlgorithm::result() {
    char *str;
    sprintf(str, "%d", f);
    return str;
}