/*
MIT License

Copyright  (c) 2009-2019 easyice

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

/* Generated by Together */

#ifndef CANALYZE_H
#define CANALYZE_H

#include "CTabParserBase.h"
#include "CTabBAT.h"
#include "CTabCAT.h"
#include "CTabDIT.h"
#include "CTabEIT.h"
#include "CTabNIT.h"
#include "CTabPAT.h"
#include "CTabPMT.h"
#include "CTabRST.h"
#include "CTabSDT.h"
#include "CTabSIT.h"
#include "CTabST.h"
#include "CTabTDT.h"
#include "CTabTOT.h"
#include "CTabTSDT.h"

namespace tables{
/**
 * 表解析类 
 */
class CAnalyze {
public:

        /**
         * 解析某个表
         * 传入某个表的所有section数据
         * 解析出table_id，根据其id决定解析后的数据放到tables的哪个成员 
         */
        void AnalyzeTable(int table_id, const TABLE_SECTIONS& table_sections, TABLES* tables);

        ~CAnalyze();

        CAnalyze();

private:
	void InitParser();
private:
	map<int,CTabParserBase*> m_mapTabParser;

	//定义各个解析类
	CTabBAT m_tabBAT;
	CTabCAT m_tabCAT;
	CTabDIT m_tabDIT;
	CTabEIT m_tabEIT;
	CTabNIT m_tabNIT;
	CTabPAT m_tabPAT;
	CTabPMT m_tabPMT;
	CTabRST m_tabRST;
	CTabSDT m_tabSDT;
	CTabSIT m_tabSIT;
	CTabST  m_tabST;
	CTabTDT m_tabTDT;
	CTabTOT m_tabTOT;
	CTabTSDT m_tabTSDT;

};

}
#endif //CANALYZE_H

