#ifndef _org_w3c_dom_ranges_Range_h_
#define _org_w3c_dom_ranges_Range_h_
//$ interface org.w3c.dom.ranges.Range
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("END_TO_END")
#undef END_TO_END
#pragma push_macro("END_TO_START")
#undef END_TO_START
#pragma push_macro("START_TO_END")
#undef START_TO_END
#pragma push_macro("START_TO_START")
#undef START_TO_START

namespace org {
	namespace w3c {
		namespace dom {
			class DocumentFragment;
			class Node;
		}
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {

class $export Range : public ::java::lang::Object {
	$interface(Range, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::DocumentFragment* cloneContents() {return nullptr;}
	virtual ::org::w3c::dom::ranges::Range* cloneRange() {return nullptr;}
	virtual void collapse(bool toStart) {}
	virtual int16_t compareBoundaryPoints(int16_t how, ::org::w3c::dom::ranges::Range* sourceRange) {return 0;}
	virtual void deleteContents() {}
	virtual void detach() {}
	virtual ::org::w3c::dom::DocumentFragment* extractContents() {return nullptr;}
	virtual bool getCollapsed() {return false;}
	virtual ::org::w3c::dom::Node* getCommonAncestorContainer() {return nullptr;}
	virtual ::org::w3c::dom::Node* getEndContainer() {return nullptr;}
	virtual int32_t getEndOffset() {return 0;}
	virtual ::org::w3c::dom::Node* getStartContainer() {return nullptr;}
	virtual int32_t getStartOffset() {return 0;}
	virtual void insertNode(::org::w3c::dom::Node* newNode) {}
	virtual void selectNode(::org::w3c::dom::Node* refNode) {}
	virtual void selectNodeContents(::org::w3c::dom::Node* refNode) {}
	virtual void setEnd(::org::w3c::dom::Node* refNode, int32_t offset) {}
	virtual void setEndAfter(::org::w3c::dom::Node* refNode) {}
	virtual void setEndBefore(::org::w3c::dom::Node* refNode) {}
	virtual void setStart(::org::w3c::dom::Node* refNode, int32_t offset) {}
	virtual void setStartAfter(::org::w3c::dom::Node* refNode) {}
	virtual void setStartBefore(::org::w3c::dom::Node* refNode) {}
	virtual void surroundContents(::org::w3c::dom::Node* newParent) {}
	virtual $String* toString() override;
	static const int16_t START_TO_START = 0;
	static const int16_t START_TO_END = 1;
	static const int16_t END_TO_END = 2;
	static const int16_t END_TO_START = 3;
};

			} // ranges
		} // dom
	} // w3c
} // org

#pragma pop_macro("END_TO_END")
#pragma pop_macro("END_TO_START")
#pragma pop_macro("START_TO_END")
#pragma pop_macro("START_TO_START")

#endif // _org_w3c_dom_ranges_Range_h_