#include <org/w3c/dom/traversal/NodeFilter.h>

#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef FILTER_ACCEPT
#undef FILTER_REJECT
#undef FILTER_SKIP
#undef SHOW_ALL
#undef SHOW_ATTRIBUTE
#undef SHOW_CDATA_SECTION
#undef SHOW_COMMENT
#undef SHOW_DOCUMENT
#undef SHOW_DOCUMENT_FRAGMENT
#undef SHOW_DOCUMENT_TYPE
#undef SHOW_ELEMENT
#undef SHOW_ENTITY
#undef SHOW_ENTITY_REFERENCE
#undef SHOW_NOTATION
#undef SHOW_PROCESSING_INSTRUCTION
#undef SHOW_TEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {

$FieldInfo _NodeFilter_FieldInfo_[] = {
	{"FILTER_ACCEPT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, FILTER_ACCEPT)},
	{"FILTER_REJECT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, FILTER_REJECT)},
	{"FILTER_SKIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, FILTER_SKIP)},
	{"SHOW_ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_ALL)},
	{"SHOW_ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_ELEMENT)},
	{"SHOW_ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_ATTRIBUTE)},
	{"SHOW_TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_TEXT)},
	{"SHOW_CDATA_SECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_CDATA_SECTION)},
	{"SHOW_ENTITY_REFERENCE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_ENTITY_REFERENCE)},
	{"SHOW_ENTITY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_ENTITY)},
	{"SHOW_PROCESSING_INSTRUCTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_PROCESSING_INSTRUCTION)},
	{"SHOW_COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_COMMENT)},
	{"SHOW_DOCUMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_DOCUMENT)},
	{"SHOW_DOCUMENT_TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_DOCUMENT_TYPE)},
	{"SHOW_DOCUMENT_FRAGMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_DOCUMENT_FRAGMENT)},
	{"SHOW_NOTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeFilter, SHOW_NOTATION)},
	{}
};

$MethodInfo _NodeFilter_MethodInfo_[] = {
	{"acceptNode", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NodeFilter, acceptNode, int16_t, $Node*)},
	{}
};

$ClassInfo _NodeFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.traversal.NodeFilter",
	nullptr,
	nullptr,
	_NodeFilter_FieldInfo_,
	_NodeFilter_MethodInfo_
};

$Object* allocate$NodeFilter($Class* clazz) {
	return $of($alloc(NodeFilter));
}

$Class* NodeFilter::load$($String* name, bool initialize) {
	$loadClass(NodeFilter, name, initialize, &_NodeFilter_ClassInfo_, allocate$NodeFilter);
	return class$;
}

$Class* NodeFilter::class$ = nullptr;

			} // traversal
		} // dom
	} // w3c
} // org