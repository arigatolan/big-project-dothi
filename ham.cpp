bool visited[500];
void DFS(int u){
	//<Tham Dinh u>;
	visited[u] = true; // Danh dau la u da ducc tham
	//Duyet cac dinh ke voi dinh u
	for(v: adj[u]){
		if(!visited[v]){ // Neu v chua ducc tham
			DFS(v);
		}
	}
}
