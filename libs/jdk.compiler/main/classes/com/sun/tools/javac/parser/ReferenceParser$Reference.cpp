#include <com/sun/tools/javac/parser/ReferenceParser$Reference.h>
#include <com/sun/tools/javac/parser/ReferenceParser.h>
#include <com/sun/tools/javac/tree/JCTree$JCExpression.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/List.h>
#include <com/sun/tools/javac/util/Name.h>
#include <jcpp.h>

using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $JCTree$JCExpression = ::com::sun::tools::javac::tree::JCTree$JCExpression;
using $List = ::com::sun::tools::javac::util::List;
using $Name = ::com::sun::tools::javac::util::Name;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace parser {

void ReferenceParser$Reference::init$($JCTree$JCExpression* moduleName, $JCTree* qualExpr, $Name* member, $List* paramTypes) {
	$set(this, moduleName, moduleName);
	$set(this, qualExpr, qualExpr);
	$set(this, member, member);
	$set(this, paramTypes, paramTypes);
}

ReferenceParser$Reference::ReferenceParser$Reference() {
}

$Class* ReferenceParser$Reference::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"moduleName", "Lcom/sun/tools/javac/tree/JCTree$JCExpression;", nullptr, $PUBLIC | $FINAL, $field(ReferenceParser$Reference, moduleName)},
		{"qualExpr", "Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC | $FINAL, $field(ReferenceParser$Reference, qualExpr)},
		{"member", "Lcom/sun/tools/javac/util/Name;", nullptr, $PUBLIC | $FINAL, $field(ReferenceParser$Reference, member)},
		{"paramTypes", "Lcom/sun/tools/javac/util/List;", "Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;", $PUBLIC | $FINAL, $field(ReferenceParser$Reference, paramTypes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List;)V", "(Lcom/sun/tools/javac/tree/JCTree$JCExpression;Lcom/sun/tools/javac/tree/JCTree;Lcom/sun/tools/javac/util/Name;Lcom/sun/tools/javac/util/List<Lcom/sun/tools/javac/tree/JCTree;>;)V", 0, $method(ReferenceParser$Reference, init$, void, $JCTree$JCExpression*, $JCTree*, $Name*, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.parser.ReferenceParser$Reference", "com.sun.tools.javac.parser.ReferenceParser", "Reference", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.parser.ReferenceParser$Reference",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.parser.ReferenceParser"
	};
	$loadClass(ReferenceParser$Reference, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceParser$Reference);
	});
	return class$;
}

$Class* ReferenceParser$Reference::class$ = nullptr;

				} // parser
			} // javac
		} // tools
	} // sun
} // com