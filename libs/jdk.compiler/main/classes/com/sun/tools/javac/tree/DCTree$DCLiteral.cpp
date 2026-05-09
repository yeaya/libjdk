#include <com/sun/tools/javac/tree/DCTree$DCLiteral.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/source/doctree/TextTree.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree$DCText.h>
#include <com/sun/tools/javac/util/Assert.h>
#include <jcpp.h>

#undef CODE
#undef LITERAL

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $TextTree = ::com::sun::source::doctree::TextTree;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
using $DCTree$DCText = ::com::sun::tools::javac::tree::DCTree$DCText;
using $Assert = ::com::sun::tools::javac::util::Assert;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCLiteral::getTagName() {
	return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCLiteral::toString() {
	return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCLiteral::hashCode() {
	return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCLiteral::equals(Object$* arg0) {
	return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCLiteral::clone() {
	return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCLiteral::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCLiteral::init$($DocTree$Kind* kind, $DCTree$DCText* body) {
	$DCTree$DCInlineTag::init$();
	$init($DocTree$Kind);
	$Assert::check(kind == $DocTree$Kind::CODE || kind == $DocTree$Kind::LITERAL);
	$set(this, kind, kind);
	$set(this, body, body);
}

$DocTree$Kind* DCTree$DCLiteral::getKind() {
	return this->kind;
}

$Object* DCTree$DCLiteral::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitLiteral(this, d);
}

$TextTree* DCTree$DCLiteral::getBody() {
	return this->body;
}

DCTree$DCLiteral::DCTree$DCLiteral() {
}

$Class* DCTree$DCLiteral::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kind", "Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCLiteral, kind)},
		{"body", "Lcom/sun/tools/javac/tree/DCTree$DCText;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCLiteral, body)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/source/doctree/DocTree$Kind;Lcom/sun/tools/javac/tree/DCTree$DCText;)V", nullptr, 0, $method(DCTree$DCLiteral, init$, void, $DocTree$Kind*, $DCTree$DCText*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCLiteral, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getBody", "()Lcom/sun/tools/javac/tree/DCTree$DCText;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCLiteral, getBody, $TextTree*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCLiteral, getKind, $DocTree$Kind*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCLiteral", "com.sun.tools.javac.tree.DCTree", "DCLiteral", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCLiteral",
		"com.sun.tools.javac.tree.DCTree$DCInlineTag",
		"com.sun.source.doctree.LiteralTree",
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
	$loadClass(DCTree$DCLiteral, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCLiteral));
	});
	return class$;
}

$Class* DCTree$DCLiteral::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com