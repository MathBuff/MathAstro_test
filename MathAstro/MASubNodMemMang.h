#include <iostream>
#include "subjectNode.h"
#ifndef _M_A_SUBJECTNODEMEMORYMANAGER_H
#define _M_A_SUBJECTNODEMEMORYMANAGER_H

class subjectNodeMemoryManager {
private:
	std::vector<subjectNode> activeSubjectNodes;
		//order matters, location reflects order
	std::vector<subjectNode> recyclerSubjectNodes;
		/*
			Order of nodes is from most recent to
			oldest addition

			Each element contains a coordinating 
			parent name.

			Each element contains a coordinating pos
			which it held before removal.

			When an element is removed

		*/

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

//TRANSFERS=============================================================

	void nodeActiveToRecycler(int activeLocation, int recyclerLocation = -1);
		/* Takes positions in active and recycler, and moves node 
		from one to other. If recycler location not specified, 
		it gets put onto the bottem of the recycler*/

	void nodeRecyclerToActive(int  recyclerLocation, int activeLocation = -1);
		/* Takes positions in recycler and active, and moves node
		from one to other. If active location not specified,
		it gets put onto the bottem of the recycler*/

//DELETERS===============================================================

	void deleteActiveNode(int activeLocation);

	void deleteRecyclerNode(int recyclerLocation);

};


#endif
