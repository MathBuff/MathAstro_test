#include <iostream>
#include "subjectNode.h"
#ifndef _M_A_SUBJECTNODEMANAGER_H
#define _M_A_SUBJECTNODEMANAGER_H

class subjectNodeManager {
private:
	std::vector<subjectNode> activeSubjectNodes;
	std::vector<subjectNode> recyclerSubjectNodes;

public:

//PRIMITIVES===========================================================
	subjectNode createNewSubNode(std::string title);
		/* creates a new subnode with given title, and returns its object*/

	void deleteSubNode(subjectNode delNode);
		/* Given an subNode Object, Pernamently deletes the subNode
		no matter its location in memory 
		(might not be pretty if this happens in a vector)
		*/ 

//FINDER\CHECKERS======================================================

	int nodeSearchActive(std::string title);
		/*Given a tile, checks for subnode it in active memory
		* -1 = not found
		*/

	int nodeSearchRecycler(std::string title);
		/*Given a tile, checks for subnode it in recycler memory
		* -1 = not found
		*/

//ADDERS===============================================================

	void nodeAddActive(subjectNode incomingNode);
		/* sends given subnode to active memory*/

	void nodeAddRecycler(subjectNode incomingNode);
		/* Given a subnode , it puts it in recycling*/

//REMOVERS=============================================================

	subjectNode nodeActiveRemoveAction(int activeLocation);
		/*Takes a subNode from active, and returns it*/

	subjectNode nodeRecyclerRemoveAction(int recyclerLocation);
		/*Takes a subNode from recycler, and returns it*/

//TRANSFER=============================================================

//DELETERS===============================================================



	

};


#endif
