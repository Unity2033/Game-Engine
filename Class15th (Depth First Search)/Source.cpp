#include <iostream>
#include <vector>

#define SIZE 8

using namespace std;

class Graph
{
private:
	bool visited[SIZE];
	vector<int> adjacencyList[SIZE];

public:
	Graph()
	{
		for (int i = 0; i < SIZE; i++)
		{
			visited[i] = false;
		}
	}

	void insert(int i, int j)
	{
		adjacencyList[i].push_back(j);
		adjacencyList[j].push_back(i);
	}

	void search(int start)
	{
		// 현재 노드를 방문한 것으로 표시합니다.
		visited[start] = true;

		// 현재 노드를 출력합니다. 
		cout << start << " ";

		// 현재 노드와 연결된 다른 노드를 재귀적으로 방문합니다.
		for (int i = 0; i < adjacencyList[start].size(); i++)
		{
			// 현재 노드와 연결된 다음 노드를 가져옵니다.
			int next = adjacencyList[start][i];

			if (visited[next] == false)
			{
				// 다음 노드가 방문하지 않은 노드라면 'search' 함수를 호출합니다.
				search(next);
			}
		}
	}
};

int main()
{
#pragma region 깊이 우선 탐색 (Depth First Search)
	// root 노드에서부터 다음 분기로 넘어가기 전에
	// 해당 분기를 완벽하게 탐색하는 방법입니다.

	// 깊이 우선 탐색은 스택을 활용합니다.

	Graph graph;

	graph.insert(1, 2);
	graph.insert(1, 3);

	graph.insert(2, 3);
	graph.insert(2, 4);
	graph.insert(2, 5);

	graph.insert(3, 6);
	graph.insert(3, 7);

	graph.insert(4, 5);
	graph.insert(6, 7);

	graph.search(1);

#pragma endregion

	return 0;
}
