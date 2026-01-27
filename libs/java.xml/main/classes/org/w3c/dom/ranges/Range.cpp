#include <org/w3c/dom/ranges/Range.h>

#include <org/w3c/dom/DocumentFragment.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef END_TO_END
#undef END_TO_START
#undef START_TO_END
#undef START_TO_START

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentFragment = ::org::w3c::dom::DocumentFragment;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {

$FieldInfo _Range_FieldInfo_[] = {
	{"START_TO_START", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Range, START_TO_START)},
	{"START_TO_END", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Range, START_TO_END)},
	{"END_TO_END", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Range, END_TO_END)},
	{"END_TO_START", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Range, END_TO_START)},
	{}
};

$MethodInfo _Range_MethodInfo_[] = {
	{"cloneContents", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, cloneContents, $DocumentFragment*), "org.w3c.dom.DOMException"},
	{"cloneRange", "()Lorg/w3c/dom/ranges/Range;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, cloneRange, Range*), "org.w3c.dom.DOMException"},
	{"collapse", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, collapse, void, bool), "org.w3c.dom.DOMException"},
	{"compareBoundaryPoints", "(SLorg/w3c/dom/ranges/Range;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, compareBoundaryPoints, int16_t, int16_t, Range*), "org.w3c.dom.DOMException"},
	{"deleteContents", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, deleteContents, void), "org.w3c.dom.DOMException"},
	{"detach", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, detach, void), "org.w3c.dom.DOMException"},
	{"extractContents", "()Lorg/w3c/dom/DocumentFragment;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, extractContents, $DocumentFragment*), "org.w3c.dom.DOMException"},
	{"getCollapsed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, getCollapsed, bool), "org.w3c.dom.DOMException"},
	{"getCommonAncestorContainer", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, getCommonAncestorContainer, $Node*), "org.w3c.dom.DOMException"},
	{"getEndContainer", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, getEndContainer, $Node*), "org.w3c.dom.DOMException"},
	{"getEndOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, getEndOffset, int32_t), "org.w3c.dom.DOMException"},
	{"getStartContainer", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, getStartContainer, $Node*), "org.w3c.dom.DOMException"},
	{"getStartOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, getStartOffset, int32_t), "org.w3c.dom.DOMException"},
	{"insertNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, insertNode, void, $Node*), "org.w3c.dom.DOMException,org.w3c.dom.ranges.RangeException"},
	{"selectNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, selectNode, void, $Node*), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"selectNodeContents", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, selectNodeContents, void, $Node*), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"setEnd", "(Lorg/w3c/dom/Node;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, setEnd, void, $Node*, int32_t), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"setEndAfter", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, setEndAfter, void, $Node*), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"setEndBefore", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, setEndBefore, void, $Node*), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"setStart", "(Lorg/w3c/dom/Node;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, setStart, void, $Node*, int32_t), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"setStartAfter", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, setStartAfter, void, $Node*), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"setStartBefore", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, setStartBefore, void, $Node*), "org.w3c.dom.ranges.RangeException,org.w3c.dom.DOMException"},
	{"surroundContents", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Range, surroundContents, void, $Node*), "org.w3c.dom.DOMException,org.w3c.dom.ranges.RangeException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Range_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ranges.Range",
	nullptr,
	nullptr,
	_Range_FieldInfo_,
	_Range_MethodInfo_
};

$Object* allocate$Range($Class* clazz) {
	return $of($alloc(Range));
}

$String* Range::toString() {
	 return this->$Object::toString();
}

$Class* Range::load$($String* name, bool initialize) {
	$loadClass(Range, name, initialize, &_Range_ClassInfo_, allocate$Range);
	return class$;
}

$Class* Range::class$ = nullptr;

			} // ranges
		} // dom
	} // w3c
} // org