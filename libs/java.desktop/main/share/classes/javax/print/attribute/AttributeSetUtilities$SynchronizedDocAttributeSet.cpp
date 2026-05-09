#include <javax/print/attribute/AttributeSetUtilities$SynchronizedDocAttributeSet.h>
#include <javax/print/attribute/Attribute.h>
#include <javax/print/attribute/AttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities$SynchronizedAttributeSet.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <jcpp.h>

using $AttributeArray = $Array<::javax::print::attribute::Attribute>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attribute = ::javax::print::attribute::Attribute;
using $AttributeSet = ::javax::print::attribute::AttributeSet;
using $AttributeSetUtilities$SynchronizedAttributeSet = ::javax::print::attribute::AttributeSetUtilities$SynchronizedAttributeSet;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;

namespace javax {
	namespace print {
		namespace attribute {

$Attribute* AttributeSetUtilities$SynchronizedDocAttributeSet::get($Class* category) {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::get(category);
}

bool AttributeSetUtilities$SynchronizedDocAttributeSet::add($Attribute* attribute) {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::add(attribute);
}

bool AttributeSetUtilities$SynchronizedDocAttributeSet::remove($Class* category) {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::remove(category);
}

bool AttributeSetUtilities$SynchronizedDocAttributeSet::remove($Attribute* attribute) {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::remove(attribute);
}

bool AttributeSetUtilities$SynchronizedDocAttributeSet::containsKey($Class* category) {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::containsKey(category);
}

bool AttributeSetUtilities$SynchronizedDocAttributeSet::containsValue($Attribute* attribute) {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::containsValue(attribute);
}

bool AttributeSetUtilities$SynchronizedDocAttributeSet::addAll($AttributeSet* attributes) {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::addAll(attributes);
}

int32_t AttributeSetUtilities$SynchronizedDocAttributeSet::size() {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::size();
}

$AttributeArray* AttributeSetUtilities$SynchronizedDocAttributeSet::toArray() {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::toArray();
}

void AttributeSetUtilities$SynchronizedDocAttributeSet::clear() {
	this->$AttributeSetUtilities$SynchronizedAttributeSet::clear();
}

bool AttributeSetUtilities$SynchronizedDocAttributeSet::isEmpty() {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::isEmpty();
}

bool AttributeSetUtilities$SynchronizedDocAttributeSet::equals(Object$* o) {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::equals(o);
}

int32_t AttributeSetUtilities$SynchronizedDocAttributeSet::hashCode() {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::hashCode();
}

$Object* AttributeSetUtilities$SynchronizedDocAttributeSet::clone() {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::clone();
}

$String* AttributeSetUtilities$SynchronizedDocAttributeSet::toString() {
	return this->$AttributeSetUtilities$SynchronizedAttributeSet::toString();
}

void AttributeSetUtilities$SynchronizedDocAttributeSet::finalize() {
	this->$AttributeSetUtilities$SynchronizedAttributeSet::finalize();
}

void AttributeSetUtilities$SynchronizedDocAttributeSet::init$($DocAttributeSet* attributeSet) {
	$AttributeSetUtilities$SynchronizedAttributeSet::init$(attributeSet);
}

AttributeSetUtilities$SynchronizedDocAttributeSet::AttributeSetUtilities$SynchronizedDocAttributeSet() {
}

$Class* AttributeSetUtilities$SynchronizedDocAttributeSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttributeSetUtilities$SynchronizedDocAttributeSet, serialVersionUID)},
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
		{"<init>", "(Ljavax/print/attribute/DocAttributeSet;)V", nullptr, $PUBLIC, $method(AttributeSetUtilities$SynchronizedDocAttributeSet, init$, void, $DocAttributeSet*)},
		{"*remove", "(Ljava/lang/Class;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*remove", "(Ljavax/print/attribute/Attribute;)Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*size", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*toArray", "()[Ljavax/print/attribute/Attribute;", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*isEmpty", "()Z", nullptr, $PUBLIC | $SYNCHRONIZED},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.print.attribute.AttributeSetUtilities$SynchronizedDocAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedDocAttributeSet", $PRIVATE | $STATIC},
		{"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet", "javax.print.attribute.AttributeSetUtilities", "SynchronizedAttributeSet", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.print.attribute.AttributeSetUtilities$SynchronizedDocAttributeSet",
		"javax.print.attribute.AttributeSetUtilities$SynchronizedAttributeSet",
		"javax.print.attribute.DocAttributeSet",
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
	$loadClass(AttributeSetUtilities$SynchronizedDocAttributeSet, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AttributeSetUtilities$SynchronizedDocAttributeSet));
	});
	return class$;
}

$Class* AttributeSetUtilities$SynchronizedDocAttributeSet::class$ = nullptr;

		} // attribute
	} // print
} // javax