#include <org/w3c/dom/ls/LSParser.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/w3c/dom/ls/LSParserFilter.h>
#include <jcpp.h>

#undef ACTION_APPEND_AS_CHILDREN
#undef ACTION_INSERT_AFTER
#undef ACTION_INSERT_BEFORE
#undef ACTION_REPLACE
#undef ACTION_REPLACE_CHILDREN

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $LSParserFilter = ::org::w3c::dom::ls::LSParserFilter;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$Class* LSParser::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ACTION_APPEND_AS_CHILDREN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_APPEND_AS_CHILDREN)},
		{"ACTION_REPLACE_CHILDREN", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_REPLACE_CHILDREN)},
		{"ACTION_INSERT_BEFORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_INSERT_BEFORE)},
		{"ACTION_INSERT_AFTER", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_INSERT_AFTER)},
		{"ACTION_REPLACE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(LSParser, ACTION_REPLACE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"abort", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, abort, void)},
		{"getAsync", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, getAsync, bool)},
		{"getBusy", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, getBusy, bool)},
		{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, getDomConfig, $DOMConfiguration*)},
		{"getFilter", "()Lorg/w3c/dom/ls/LSParserFilter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, getFilter, $LSParserFilter*)},
		{"parse", "(Lorg/w3c/dom/ls/LSInput;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, parse, $Document*, $LSInput*), "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
		{"parseURI", "(Ljava/lang/String;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, parseURI, $Document*, $String*), "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
		{"parseWithContext", "(Lorg/w3c/dom/ls/LSInput;Lorg/w3c/dom/Node;S)Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, parseWithContext, $Node*, $LSInput*, $Node*, int16_t), "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
		{"setFilter", "(Lorg/w3c/dom/ls/LSParserFilter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSParser, setFilter, void, $LSParserFilter*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ls.LSParser",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LSParser, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LSParser);
	});
	return class$;
}

$Class* LSParser::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org