#include <org/w3c/dom/ls/LSParserFilter.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef FILTER_ACCEPT
#undef FILTER_INTERRUPT
#undef FILTER_REJECT
#undef FILTER_SKIP

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$Class* LSParserFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FILTER_ACCEPT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParserFilter, FILTER_ACCEPT)},
		{"FILTER_REJECT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParserFilter, FILTER_REJECT)},
		{"FILTER_SKIP", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParserFilter, FILTER_SKIP)},
		{"FILTER_INTERRUPT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParserFilter, FILTER_INTERRUPT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"acceptNode", "(Lorg/w3c/dom/Node;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParserFilter, acceptNode, int16_t, $Node*)},
		{"getWhatToShow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParserFilter, getWhatToShow, int32_t)},
		{"startElement", "(Lorg/w3c/dom/Element;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParserFilter, startElement, int16_t, $Element*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ls.LSParserFilter",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LSParserFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LSParserFilter);
	});
	return class$;
}

$Class* LSParserFilter::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org