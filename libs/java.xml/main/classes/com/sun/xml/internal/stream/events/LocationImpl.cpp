#include <com/sun/xml/internal/stream/events/LocationImpl.h>

#include <java/lang/StringBuffer.h>
#include <javax/xml/stream/Location.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Location = ::javax::xml::stream::Location;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace events {

$FieldInfo _LocationImpl_FieldInfo_[] = {
	{"systemId", "Ljava/lang/String;", nullptr, 0, $field(LocationImpl, systemId)},
	{"publicId", "Ljava/lang/String;", nullptr, 0, $field(LocationImpl, publicId)},
	{"colNo", "I", nullptr, 0, $field(LocationImpl, colNo)},
	{"lineNo", "I", nullptr, 0, $field(LocationImpl, lineNo)},
	{"charOffset", "I", nullptr, 0, $field(LocationImpl, charOffset)},
	{}
};

$MethodInfo _LocationImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/stream/Location;)V", nullptr, 0, $method(LocationImpl, init$, void, $Location*)},
	{"getCharacterOffset", "()I", nullptr, $PUBLIC, $virtualMethod(LocationImpl, getCharacterOffset, int32_t)},
	{"getColumnNumber", "()I", nullptr, $PUBLIC, $virtualMethod(LocationImpl, getColumnNumber, int32_t)},
	{"getLineNumber", "()I", nullptr, $PUBLIC, $virtualMethod(LocationImpl, getLineNumber, int32_t)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocationImpl, getPublicId, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocationImpl, getSystemId, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(LocationImpl, toString, $String*)},
	{}
};

$ClassInfo _LocationImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.events.LocationImpl",
	"java.lang.Object",
	"javax.xml.stream.Location",
	_LocationImpl_FieldInfo_,
	_LocationImpl_MethodInfo_
};

$Object* allocate$LocationImpl($Class* clazz) {
	return $of($alloc(LocationImpl));
}

void LocationImpl::init$($Location* loc) {
	$set(this, systemId, $nc(loc)->getSystemId());
	$set(this, publicId, loc->getPublicId());
	this->lineNo = loc->getLineNumber();
	this->colNo = loc->getColumnNumber();
	this->charOffset = loc->getCharacterOffset();
}

int32_t LocationImpl::getCharacterOffset() {
	return this->charOffset;
}

int32_t LocationImpl::getColumnNumber() {
	return this->colNo;
}

int32_t LocationImpl::getLineNumber() {
	return this->lineNo;
}

$String* LocationImpl::getPublicId() {
	return this->publicId;
}

$String* LocationImpl::getSystemId() {
	return this->systemId;
}

$String* LocationImpl::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sbuffer, $new($StringBuffer));
	sbuffer->append($$str({"Line number = "_s, $$str(getLineNumber())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"Column number = "_s, $$str(getColumnNumber())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"System Id = "_s, $(getSystemId())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"Public Id = "_s, $(getPublicId())}));
	sbuffer->append("\n"_s);
	sbuffer->append($$str({"CharacterOffset = "_s, $$str(getCharacterOffset())}));
	sbuffer->append("\n"_s);
	return sbuffer->toString();
}

LocationImpl::LocationImpl() {
}

$Class* LocationImpl::load$($String* name, bool initialize) {
	$loadClass(LocationImpl, name, initialize, &_LocationImpl_ClassInfo_, allocate$LocationImpl);
	return class$;
}

$Class* LocationImpl::class$ = nullptr;

					} // events
				} // stream
			} // internal
		} // xml
	} // sun
} // com