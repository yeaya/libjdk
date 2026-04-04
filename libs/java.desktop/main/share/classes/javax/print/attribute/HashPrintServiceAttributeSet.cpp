#include <javax/print/attribute/HashPrintServiceAttributeSet.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/HashAttributeSet.h>
#include <javax/print/attribute/PrintServiceAttribute.h>
#include <javax/print/attribute/PrintServiceAttributeSet.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $PrintServiceAttributeArray = $Array<::javax::print::attribute::PrintServiceAttribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $HashAttributeSet = ::javax::print::attribute::HashAttributeSet;
using $PrintServiceAttribute = ::javax::print::attribute::PrintServiceAttribute;
using $PrintServiceAttributeSet = ::javax::print::attribute::PrintServiceAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$Attribute* HashPrintServiceAttributeSet::get($Class* category) {
	 return this->$HashAttributeSet::get(category);
}

bool HashPrintServiceAttributeSet::add($Attribute* attribute) {
	 return this->$HashAttributeSet::add(attribute);
}

bool HashPrintServiceAttributeSet::remove($Class* category) {
	 return this->$HashAttributeSet::remove(category);
}

bool HashPrintServiceAttributeSet::remove($Attribute* attribute) {
	 return this->$HashAttributeSet::remove(attribute);
}

bool HashPrintServiceAttributeSet::containsKey($Class* category) {
	 return this->$HashAttributeSet::containsKey(category);
}

bool HashPrintServiceAttributeSet::containsValue($Attribute* attribute) {
	 return this->$HashAttributeSet::containsValue(attribute);
}

bool HashPrintServiceAttributeSet::addAll($AttributeSet* attributes) {
	 return this->$HashAttributeSet::addAll(attributes);
}

int32_t HashPrintServiceAttributeSet::size() {
	 return this->$HashAttributeSet::size();
}

$AttributeArray* HashPrintServiceAttributeSet::toArray() {
	 return this->$HashAttributeSet::toArray();
}

void HashPrintServiceAttributeSet::clear() {
	this->$HashAttributeSet::clear();
}

bool HashPrintServiceAttributeSet::isEmpty() {
	 return this->$HashAttributeSet::isEmpty();
}

bool HashPrintServiceAttributeSet::equals(Object$* object) {
	 return this->$HashAttributeSet::equals(object);
}

int32_t HashPrintServiceAttributeSet::hashCode() {
	 return this->$HashAttributeSet::hashCode();
}

$Object* HashPrintServiceAttributeSet::clone() {
	 return this->$HashAttributeSet::clone();
}

$String* HashPrintServiceAttributeSet::toString() {
	 return this->$HashAttributeSet::toString();
}

void HashPrintServiceAttributeSet::finalize() {
	this->$HashAttributeSet::finalize();
}

void HashPrintServiceAttributeSet::init$() {
	$load($PrintServiceAttribute);
	$HashAttributeSet::init$($PrintServiceAttribute::class$);
}

void HashPrintServiceAttributeSet::init$($PrintServiceAttribute* attribute) {
	$load($PrintServiceAttribute);
	$HashAttributeSet::init$(attribute, $PrintServiceAttribute::class$);
}

void HashPrintServiceAttributeSet::init$($PrintServiceAttributeArray* attributes) {
	$load($PrintServiceAttribute);
	$HashAttributeSet::init$($cast($AttributeArray, attributes), $PrintServiceAttribute::class$);
}

void HashPrintServiceAttributeSet::init$($PrintServiceAttributeSet* attributes) {
	$load($PrintServiceAttribute);
	$HashAttributeSet::init$(attributes, $PrintServiceAttribute::class$);
}

HashPrintServiceAttributeSet::HashPrintServiceAttributeSet() {
}

$Class* HashPrintServiceAttributeSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HashPrintServiceAttributeSet, serialVersionUID)},
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
		{"<init>", "()V", nullptr, $PUBLIC, $method(HashPrintServiceAttributeSet, init$, void)},
		{"<init>", "(Ljavax/print/attribute/PrintServiceAttribute;)V", nullptr, $PUBLIC, $method(HashPrintServiceAttributeSet, init$, void, $PrintServiceAttribute*)},
		{"<init>", "([Ljavax/print/attribute/PrintServiceAttribute;)V", nullptr, $PUBLIC, $method(HashPrintServiceAttributeSet, init$, void, $PrintServiceAttributeArray*)},
		{"<init>", "(Ljavax/print/attribute/PrintServiceAttributeSet;)V", nullptr, $PUBLIC, $method(HashPrintServiceAttributeSet, init$, void, $PrintServiceAttributeSet*)},
		{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC},
		{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC},
		{"*size", "()I", nullptr, $PUBLIC},
		{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC},
		{"*isEmpty", "()Z", nullptr, $PUBLIC},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.print.attribute.HashPrintServiceAttributeSet",
		"javax.print.attribute.HashAttributeSet",
		"javax.print.attribute.PrintServiceAttributeSet",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HashPrintServiceAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HashPrintServiceAttributeSet));
	});
	return class$;
}

$Class* HashPrintServiceAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax