#include <iostream>
#include <vector>
#include "nodePositioner.h"
#include "compEnum.h"

#ifndef _SUBJECT_NODE_H_
#define _SUBJECT_NODE_H_
class subjectNode {
private:
    //DATA_LISTS=================================================
        std::string title;//TITLE_DATA

        std::vector<std::string> links;//LINK_URL_DATA
        std::vector<std::string> linkNames;//LINK_NAME_DATA

        std::vector<std::string> childNames;//CHILD_DATA

        std::vector<std::string> taxTags;//TAXTAG_DATA
    
        compStatus compTag;//COMPTAG_DATA

public:
    //TITLE_TOOLS================================================
        std::string getTitle();
        void setTitle(std::string input);

    //LINK_TOOLS=================================================

        int searchLinks(std::string linkName);
      
        void addLink(std::string link,std::string linkName, int itemPosition);
            /*adds a link and name in coordinating positions
            of links and linkNames lists*/

        void removelink(int itemPosition);

        std::string getLink(int itemPosition);

    //CHILD_TOOLS================================================
        bool addChild(std::string input);
            //Returns false if input child already exists

        void removeChild(int childNum);

        std::string getChild(int childNum);

        int getNumberofChildren();

        bool addTaxTag(std::string input);
            //returns false if input taxtag already exists


    //TAXTAG=====================================================

        void setCompTag(compStatus input);

        void removeTaxTag(int taxNum);

        std::string getTaxTag(int taxNum);

        int getNumberofTaxTags();

    //COMPTAG=================================================
        compStatus getCompTag();

        void setCompTagIncomplete();

        void setCompTagComplete();

        void setCompTagStub();

    //POSITION_DATA=============================================
        nodePositioner location;
};
#endif

