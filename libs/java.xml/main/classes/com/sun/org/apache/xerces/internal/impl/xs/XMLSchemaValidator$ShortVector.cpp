#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator$ShortVector.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaValidator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XMLSchemaValidator$ShortVector_FieldInfo_[] = {
	{"fLength", "I", nullptr, $PRIVATE, $field(XMLSchemaValidator$ShortVector, fLength)},
	{"fData", "[S", nullptr, $PRIVATE, $field(XMLSchemaValidator$ShortVector, fData)},
	{}
};

$MethodInfo _XMLSchemaValidator$ShortVector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLSchemaValidator$ShortVector, init$, void)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$ShortVector, init$, void, int32_t)},
	{"add", "(S)V", nullptr, $PUBLIC, $method(XMLSchemaValidator$ShortVector, add, void, int16_t)},
	{"clear", "()V", nullptr, $PUBLIC, $method(XMLSchemaValidator$ShortVector, clear, void)},
	{"contains", "(S)Z", nullptr, $PUBLIC, $method(XMLSchemaValidator$ShortVector, contains, bool, int16_t)},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(XMLSchemaValidator$ShortVector, ensureCapacity, void, int32_t)},
	{"length", "()I", nullptr, $PUBLIC, $method(XMLSchemaValidator$ShortVector, length, int32_t)},
	{"valueAt", "(I)S", nullptr, $PUBLIC, $method(XMLSchemaValidator$ShortVector, valueAt, int16_t, int32_t)},
	{}
};

$InnerClassInfo _XMLSchemaValidator$ShortVector_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ShortVector", "com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator", "ShortVector", $PROTECTED | $STATIC | $FINAL},
	{}
};

$ClassInfo _XMLSchemaValidator$ShortVector_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ShortVector",
	"java.lang.Object",
	nullptr,
	_XMLSchemaValidator$ShortVector_FieldInfo_,
	_XMLSchemaValidator$ShortVector_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSchemaValidator$ShortVector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator"
};

$Object* allocate$XMLSchemaValidator$ShortVector($Class* clazz) {
	return $of($alloc(XMLSchemaValidator$ShortVector));
}

void XMLSchemaValidator$ShortVector::init$() {
}

void XMLSchemaValidator$ShortVector::init$(int32_t initialCapacity) {
	$set(this, fData, $new($shorts, initialCapacity));
}

int32_t XMLSchemaValidator$ShortVector::length() {
	return this->fLength;
}

void XMLSchemaValidator$ShortVector::add(int16_t value) {
	ensureCapacity(this->fLength + 1);
	$nc(this->fData)->set(this->fLength++, value);
}

int16_t XMLSchemaValidator$ShortVector::valueAt(int32_t position) {
	return $nc(this->fData)->get(position);
}

void XMLSchemaValidator$ShortVector::clear() {
	this->fLength = 0;
}

bool XMLSchemaValidator$ShortVector::contains(int16_t value) {
	for (int32_t i = 0; i < this->fLength; ++i) {
		if ($nc(this->fData)->get(i) == value) {
			return true;
		}
	}
	return false;
}

void XMLSchemaValidator$ShortVector::ensureCapacity(int32_t size) {
	if (this->fData == nullptr) {
		$set(this, fData, $new($shorts, 8));
	} else if ($nc(this->fData)->length <= size) {
		$var($shorts, newdata, $new($shorts, $nc(this->fData)->length * 2));
		$System::arraycopy(this->fData, 0, newdata, 0, $nc(this->fData)->length);
		$set(this, fData, newdata);
	}
}

XMLSchemaValidator$ShortVector::XMLSchemaValidator$ShortVector() {
}

$Class* XMLSchemaValidator$ShortVector::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaValidator$ShortVector, name, initialize, &_XMLSchemaValidator$ShortVector_ClassInfo_, allocate$XMLSchemaValidator$ShortVector);
	return class$;
}

$Class* XMLSchemaValidator$ShortVector::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com