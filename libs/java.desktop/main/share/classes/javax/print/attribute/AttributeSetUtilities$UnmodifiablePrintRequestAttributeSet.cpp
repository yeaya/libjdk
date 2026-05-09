#include <javax/print/attribute/AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$UnmodifiableAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/PrintRequestAttributeSet.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities$UnmodifiableAttributeSet = ::javax::print::attribute::AttributeSetUtilities$UnmodifiableAttributeSet;
using $PrintRequestAttributeSet = ::javax::print::attribute::PrintRequestAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$Attribute* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::get($Class* key) {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::get(key);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::add($Attribute* attribute) {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::add(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::remove($Class* category) {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(category);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::remove($Attribute* attribute) {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::containsKey($Class* category) {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::containsValue($Attribute* attribute) {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::addAll($AttributeSet* attributes) {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::size() {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::toArray() {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toArray();
}

void AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::clear() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::clear();
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::isEmpty() {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::isEmpty();
}

bool AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::equals(Object$* o) {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::hashCode() {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::clone() {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::clone();
}

$String* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::toString() {
	return this->$AttributeSetUtilities$UnmodifiableAttributeSet::toString();
}

void AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::finalize() {
	this->$AttributeSetUtilities$UnmodifiableAttributeSet::finalize();
}

void AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::init$($PrintRequestAttributeSet* attributeSet) {
	$AttributeSetUtilities$UnmodifiableAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet() {
}

$Class* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*add", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
		{"*addAll", "(Ljavax/print/attribute/AttributeSet;)Z", nullptr, $PUBLIC},
		{"*clear", "()V", nullptr, $PUBLIC},
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*containsKey", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC},
		{"*containsValue", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*get", "(Ljava/lang/Class;)Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljavax/print/attribute/PrintRequestAttributeSet;)V", nullptr, $PUBLIC, $method(AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet, init$, void, $PrintRequestAttributeSet*)},
		{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
		{"*size", "()I", nullptr, $PUBLIC},
		{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
		{"*isEmpty", "()Z", nullptr, $PUBLIC},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiablePrintRequestAttributeSet", $PRIVATE | $STATIC},
		{"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet", "javax.print.attribute.AttributeSetUtilities", "UnmodifiableAttributeSet", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.attribute.AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet",
		"javax.print.attribute.AttributeSetUtilities$UnmodifiableAttributeSet",
		"javax.print.attribute.PrintRequestAttributeSet",
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
	$loadClass(AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet));
	});
	return class$;
}

$Class* AttributeSetUtilities$UnmodifiablePrintRequestAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax