#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NamespaceAlias.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _NamespaceAlias_FieldInfo_[] = {
	{"sPrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NamespaceAlias, sPrefix)},
	{"rPrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NamespaceAlias, rPrefix)},
	{}
};

$MethodInfo _NamespaceAlias_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NamespaceAlias, init$, void)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(NamespaceAlias, parseContents, void, $Parser*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(NamespaceAlias, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(NamespaceAlias, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _NamespaceAlias_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.NamespaceAlias",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.TopLevelElement",
	nullptr,
	_NamespaceAlias_FieldInfo_,
	_NamespaceAlias_MethodInfo_
};

$Object* allocate$NamespaceAlias($Class* clazz) {
	return $of($alloc(NamespaceAlias));
}

void NamespaceAlias::init$() {
	$TopLevelElement::init$();
}

void NamespaceAlias::parseContents($Parser* parser) {
	$set(this, sPrefix, getAttribute("stylesheet-prefix"_s));
	$set(this, rPrefix, getAttribute("result-prefix"_s));
	$nc($($nc(parser)->getSymbolTable()))->addPrefixAlias(this->sPrefix, this->rPrefix);
}

$Type* NamespaceAlias::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $Type::Void;
}

void NamespaceAlias::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
}

NamespaceAlias::NamespaceAlias() {
}

$Class* NamespaceAlias::load$($String* name, bool initialize) {
	$loadClass(NamespaceAlias, name, initialize, &_NamespaceAlias_ClassInfo_, allocate$NamespaceAlias);
	return class$;
}

$Class* NamespaceAlias::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com