#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NodeTest.h>
#include <jcpp.h>

#undef ANODE
#undef ATTRIBUTE
#undef COMMENT
#undef ELEMENT
#undef GTYPE
#undef PI
#undef ROOT
#undef TEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$Class* NodeTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, TEXT)},
		{"COMMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, COMMENT)},
		{"PI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, PI)},
		{"ROOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, ROOT)},
		{"ELEMENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, ELEMENT)},
		{"ATTRIBUTE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, ATTRIBUTE)},
		{"GTYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, GTYPE)},
		{"ANODE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(NodeTest, ANODE)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.NodeTest",
		nullptr,
		nullptr,
		fieldInfos$$
	};
	$loadClass(NodeTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NodeTest);
	});
	return class$;
}

$Class* NodeTest::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com