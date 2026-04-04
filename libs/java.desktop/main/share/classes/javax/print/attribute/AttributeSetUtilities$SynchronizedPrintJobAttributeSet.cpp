#include <javax/print/attribute/AttributeSetUtilities$SynchronizedPrintJobAttributeSet.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/PrintJobAttributeSet.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities$SynchronizedAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet;
using $PrintJobAttributeSet = ::javax::print::attribute::PrintJobAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$Attribute* AttributeSetUtilities$SynchronizedPrintJobAttributeSet::get($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::get(category);
}

bool AttributeSetUtilities$SynchronizedPrintJobAttributeSet::add($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::add(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintJobAttributeSet::remove($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::remove(category);
}

bool AttributeSetUtilities$SynchronizedPrintJobAttributeSet::remove($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintJobAttributeSet::containsKey($Class* category) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$SynchronizedPrintJobAttributeSet::containsValue($Attribute* attribute) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$SynchronizedPrintJobAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$SynchronizedPrintJobAttributeSet::size() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$SynchronizedPrintJobAttributeSet::toArray() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::toArray();
}

void AttributeSetUtilities$SynchronizedPrintJobAttributeSet::clear() {
	this->$AttributeSetUtilities$SynchronizedAttributeSet::clear();
}

bool AttributeSetUtilities$SynchronizedPrintJobAttributeSet::isEmpty() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::isEmpty();
}

bool AttributeSetUtilities$SynchronizedPrintJobAttributeSet::equals(Object$* o) {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$SynchronizedPrintJobAttributeSet::hashCode() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$SynchronizedPrintJobAttributeSet::clone() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::clone();
}

$String* AttributeSetUtilities$SynchronizedPrintJobAttributeSet::toString() {
	 return this->$AttributeSetUtilities$SynchronizedAttributeSet::toString();
}

void AttributeSetUtilities$SynchronizedPrintJobAttributeSet::finalize() {
	this->$AttributeSetUtilities$SynchronizedAttributeSet::finalize();
}

void AttributeSetUtilities$SynchronizedPrintJobAttributeSet::init$($PrintJobAttributeSet* attributeSet) {
	$AttributeSetUtilities$SynchronizedAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$SynchronizedPrintJobAttributeSet::AttributeSetUtilities$SynchronizedPrintJobAttributeSet() {
}

$Class* AttributeSetUtilities$SynchronizedPrintJobAttributeSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$SynchronizedPrintJobAttributeSet, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*clear", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*containsKey", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"<init>", "(Ljavax/print/attribute/PrintJobAttributeSet;)V", nullptr, $PUBLIC, $method(AttributeSetUtilities$SynchronizedPrintJobAttributeSet, init$, void, $PrintJobAttributeSet*)},
		{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*size", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*isEmpty", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintJobAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedPrintJobAttributeSet", $PRIVATE | $STATIC},
		{"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedAttributeSet", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.attribute.AttributeSetUtilities$SynchronizedPrintJobAttributeSet",
		"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet",
		"javax.print.attribute.PrintJobAttributeSet",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.print.attribute.AttributeSetUtilities"
	};
	$loadClass(AttributeSetUtilities$SynchronizedPrintJobAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AttributeSetUtilities$SynchronizedPrintJobAttributeSet));
	});
	return class$;
}

$Class* AttributeSetUtilities$SynchronizedPrintJobAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax