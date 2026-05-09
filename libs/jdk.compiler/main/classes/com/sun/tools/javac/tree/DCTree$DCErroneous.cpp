#include <com/sun/tools/javac/tree/DCTree$DCErroneous.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <com/sun/tools/javac/tree/EndPosTable.h>
#include <com/sun/tools/javac/tree/JCTree.h>
#include <com/sun/tools/javac/util/DiagnosticSource.h>
#include <com/sun/tools/javac/util/JCDiagnostic$DiagnosticFlag.h>
#include <com/sun/tools/javac/util/JCDiagnostic$Factory.h>
#include <com/sun/tools/javac/util/JCDiagnostic.h>
#include <javax/tools/Diagnostic.h>
#include <jcpp.h>

#undef ERRONEOUS

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree = ::com::sun::tools::javac::tree::DCTree;
using $EndPosTable = ::com::sun::tools::javac::tree::EndPosTable;
using $JCTree = ::com::sun::tools::javac::tree::JCTree;
using $DiagnosticSource = ::com::sun::tools::javac::util::DiagnosticSource;
using $JCDiagnostic = ::com::sun::tools::javac::util::JCDiagnostic;
using $JCDiagnostic$DiagnosticFlag = ::com::sun::tools::javac::util::JCDiagnostic$DiagnosticFlag;
using $JCDiagnostic$Factory = ::com::sun::tools::javac::util::JCDiagnostic$Factory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Diagnostic = ::javax::tools::Diagnostic;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCErroneous::toString() {
	return this->$DCTree::toString();
}

int32_t DCTree$DCErroneous::hashCode() {
	return this->$DCTree::hashCode();
}

bool DCTree$DCErroneous::equals(Object$* arg0) {
	return this->$DCTree::equals(arg0);
}

$Object* DCTree$DCErroneous::clone() {
	return this->$DCTree::clone();
}

void DCTree$DCErroneous::finalize() {
	this->$DCTree::finalize();
}

void DCTree$DCErroneous::init$($String* body, $JCDiagnostic$Factory* diags, $DiagnosticSource* diagSource, $String* code, $ObjectArray* args) {
	$DCTree::init$();
	$set(this, body, body);
	$set(this, diag, $nc(diags)->error(nullptr, diagSource, this, code, args));
}

void DCTree$DCErroneous::init$($String* body, $JCDiagnostic* diag) {
	$DCTree::init$();
	$set(this, body, body);
	$set(this, diag, diag);
}

$DocTree$Kind* DCTree$DCErroneous::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::ERRONEOUS;
}

$Object* DCTree$DCErroneous::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitErroneous(this, d);
}

$String* DCTree$DCErroneous::getBody() {
	return this->body;
}

$Diagnostic* DCTree$DCErroneous::getDiagnostic() {
	return this->diag;
}

$JCTree* DCTree$DCErroneous::getTree() {
	return nullptr;
}

int32_t DCTree$DCErroneous::getStartPosition() {
	return this->pos$;
}

int32_t DCTree$DCErroneous::getPreferredPosition() {
	return this->pos$ + $nc(this->body)->length() - 1;
}

int32_t DCTree$DCErroneous::getEndPosition($EndPosTable* endPosTable) {
	return this->pos$ + $nc(this->body)->length();
}

DCTree$DCErroneous::DCTree$DCErroneous() {
}

$Class* DCTree$DCErroneous::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"body", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCErroneous, body)},
		{"diag", "Lcom/sun/tools/javac/util/JCDiagnostic;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCErroneous, diag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic$Factory;Lcom/sun/tools/javac/util/DiagnosticSource;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(DCTree$DCErroneous, init$, void, $String*, $JCDiagnostic$Factory*, $DiagnosticSource*, $String*, $ObjectArray*)},
		{"<init>", "(Ljava/lang/String;Lcom/sun/tools/javac/util/JCDiagnostic;)V", nullptr, 0, $method(DCTree$DCErroneous, init$, void, $String*, $JCDiagnostic*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCErroneous, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getBody", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCErroneous, getBody, $String*)},
		{"getDiagnostic", "()Ljavax/tools/Diagnostic;", "()Ljavax/tools/Diagnostic<Ljavax/tools/JavaFileObject;>;", $PUBLIC, $virtualMethod(DCTree$DCErroneous, getDiagnostic, $Diagnostic*)},
		{"getEndPosition", "(Lcom/sun/tools/javac/tree/EndPosTable;)I", nullptr, $PUBLIC, $virtualMethod(DCTree$DCErroneous, getEndPosition, int32_t, $EndPosTable*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCErroneous, getKind, $DocTree$Kind*)},
		{"getPreferredPosition", "()I", nullptr, $PUBLIC, $virtualMethod(DCTree$DCErroneous, getPreferredPosition, int32_t)},
		{"getStartPosition", "()I", nullptr, $PUBLIC, $virtualMethod(DCTree$DCErroneous, getStartPosition, int32_t)},
		{"getTree", "()Lcom/sun/tools/javac/tree/JCTree;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCErroneous, getTree, $JCTree*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCErroneous", "com.sun.tools.javac.tree.DCTree", "DCErroneous", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition", "com.sun.tools.javac.util.JCDiagnostic", "DiagnosticPosition", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCErroneous",
		"com.sun.tools.javac.tree.DCTree",
		"com.sun.source.doctree.ErroneousTree,com.sun.tools.javac.util.JCDiagnostic$DiagnosticPosition",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.tree.DCTree"
	};
	$loadClass(DCTree$DCErroneous, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCErroneous));
	});
	return class$;
}

$Class* DCTree$DCErroneous::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com