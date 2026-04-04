#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader$LocationArray.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader.h>
#include <java/lang/Math.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

void XMLSchemaLoader$LocationArray::init$() {
	$set(this, locations, $new($StringArray, 2));
}

void XMLSchemaLoader$LocationArray::resize(int32_t oldLength, int32_t newLength) {
	$var($StringArray, temp, $new($StringArray, newLength));
	$System::arraycopy(this->locations, 0, temp, 0, $Math::min(oldLength, newLength));
	$set(this, locations, temp);
	this->length = $Math::min(oldLength, newLength);
}

void XMLSchemaLoader$LocationArray::addLocation($String* location) {
	if (this->length >= $nc(this->locations)->length) {
		resize(this->length, $Math::max(1, this->length * 2));
	}
	$nc(this->locations)->set(this->length++, location);
}

$StringArray* XMLSchemaLoader$LocationArray::getLocationArray() {
	if (this->length < $nc(this->locations)->length) {
		resize(this->locations->length, this->length);
	}
	return this->locations;
}

$String* XMLSchemaLoader$LocationArray::getFirstLocation() {
	return this->length > 0 ? $nc(this->locations)->get(0) : ($String*)nullptr;
}

int32_t XMLSchemaLoader$LocationArray::getLength() {
	return this->length;
}

XMLSchemaLoader$LocationArray::XMLSchemaLoader$LocationArray() {
}

$Class* XMLSchemaLoader$LocationArray::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"length", "I", nullptr, 0, $field(XMLSchemaLoader$LocationArray, length)},
		{"locations", "[Ljava/lang/String;", nullptr, 0, $field(XMLSchemaLoader$LocationArray, locations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSchemaLoader$LocationArray, init$, void)},
		{"addLocation", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader$LocationArray, addLocation, void, $String*)},
		{"getFirstLocation", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader$LocationArray, getFirstLocation, $String*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader$LocationArray, getLength, int32_t)},
		{"getLocationArray", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader$LocationArray, getLocationArray, $StringArray*)},
		{"resize", "(II)V", nullptr, $PUBLIC, $virtualMethod(XMLSchemaLoader$LocationArray, resize, void, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader$LocationArray", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader", "LocationArray", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader$LocationArray",
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
		"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader"
	};
	$loadClass(XMLSchemaLoader$LocationArray, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLSchemaLoader$LocationArray);
	});
	return class$;
}

$Class* XMLSchemaLoader$LocationArray::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com