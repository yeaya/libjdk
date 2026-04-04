#include <com/sun/tools/javac/tree/DCTree$DCSystemProperty.h>
#include <com/sun/source/doctree/DocTree$Kind.h>
#include <com/sun/source/doctree/DocTreeVisitor.h>
#include <com/sun/tools/javac/tree/DCTree$DCInlineTag.h>
#include <com/sun/tools/javac/tree/DCTree.h>
#include <javax/lang/model/element/Name.h>
#include <jcpp.h>

#undef SYSTEM_PROPERTY

using $DocTree$Kind = ::com::sun::source::doctree::DocTree$Kind;
using $DocTreeVisitor = ::com::sun::source::doctree::DocTreeVisitor;
using $DCTree$DCInlineTag = ::com::sun::tools::javac::tree::DCTree$DCInlineTag;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Name = ::javax::lang::model::element::Name;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace tree {

$String* DCTree$DCSystemProperty::getTagName() {
	 return this->$DCTree$DCInlineTag::getTagName();
}

$String* DCTree$DCSystemProperty::toString() {
	 return this->$DCTree$DCInlineTag::toString();
}

int32_t DCTree$DCSystemProperty::hashCode() {
	 return this->$DCTree$DCInlineTag::hashCode();
}

bool DCTree$DCSystemProperty::equals(Object$* arg0) {
	 return this->$DCTree$DCInlineTag::equals(arg0);
}

$Object* DCTree$DCSystemProperty::clone() {
	 return this->$DCTree$DCInlineTag::clone();
}

void DCTree$DCSystemProperty::finalize() {
	this->$DCTree$DCInlineTag::finalize();
}

void DCTree$DCSystemProperty::init$($Name* propertyName) {
	$DCTree$DCInlineTag::init$();
	$set(this, propertyName, propertyName);
}

$DocTree$Kind* DCTree$DCSystemProperty::getKind() {
	$init($DocTree$Kind);
	return $DocTree$Kind::SYSTEM_PROPERTY;
}

$Object* DCTree$DCSystemProperty::accept($DocTreeVisitor* v, Object$* d) {
	return $nc(v)->visitSystemProperty(this, d);
}

$Name* DCTree$DCSystemProperty::getPropertyName() {
	return this->propertyName;
}

DCTree$DCSystemProperty::DCTree$DCSystemProperty() {
}

$Class* DCTree$DCSystemProperty::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"propertyName", "Ljavax/lang/model/element/Name;", nullptr, $PUBLIC | $FINAL, $field(DCTree$DCSystemProperty, propertyName)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getTagName", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/lang/model/element/Name;)V", nullptr, 0, $method(DCTree$DCSystemProperty, init$, void, $Name*)},
		{"accept", "(Lcom/sun/source/doctree/DocTreeVisitor;Ljava/lang/Object;)Ljava/lang/Object;", "<R:Ljava/lang/Object;D:Ljava/lang/Object;>(Lcom/sun/source/doctree/DocTreeVisitor<TR;TD;>;TD;)TR;", $PUBLIC, $virtualMethod(DCTree$DCSystemProperty, accept, $Object*, $DocTreeVisitor*, Object$*)},
		{"getKind", "()Lcom/sun/source/doctree/DocTree$Kind;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCSystemProperty, getKind, $DocTree$Kind*)},
		{"getPropertyName", "()Ljavax/lang/model/element/Name;", nullptr, $PUBLIC, $virtualMethod(DCTree$DCSystemProperty, getPropertyName, $Name*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.tree.DCTree$DCSystemProperty", "com.sun.tools.javac.tree.DCTree", "DCSystemProperty", $PUBLIC | $STATIC},
		{"com.sun.tools.javac.tree.DCTree$DCInlineTag", "com.sun.tools.javac.tree.DCTree", "DCInlineTag", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.tree.DCTree$DCSystemProperty",
		"com.sun.tools.javac.tree.DCTree$DCInlineTag",
		"com.sun.source.doctree.SystemPropertyTree",
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
	$loadClass(DCTree$DCSystemProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DCTree$DCSystemProperty));
	});
	return class$;
}

$Class* DCTree$DCSystemProperty::class$ = nullptr;

				} // tree
			} // javac
		} // tools
	} // sun
} // com