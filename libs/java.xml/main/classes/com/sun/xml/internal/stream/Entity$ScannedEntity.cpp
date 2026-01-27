#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/xml/internal/stream/Entity.h>
#include <com/sun/xml/internal/stream/util/BufferAllocator.h>
#include <com/sun/xml/internal/stream/util/ThreadLocalBufferAllocator.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef DEFAULT_BUFFER_SIZE
#undef DEFAULT_INTERNAL_BUFFER_SIZE
#undef DEFAULT_XMLDECL_BUFFER_SIZE

using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $Entity = ::com::sun::xml::internal::stream::Entity;
using $BufferAllocator = ::com::sun::xml::internal::stream::util::BufferAllocator;
using $ThreadLocalBufferAllocator = ::com::sun::xml::internal::stream::util::ThreadLocalBufferAllocator;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

$FieldInfo _Entity$ScannedEntity_FieldInfo_[] = {
	{"DEFAULT_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Entity$ScannedEntity, DEFAULT_BUFFER_SIZE)},
	{"fBufferSize", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, fBufferSize)},
	{"DEFAULT_XMLDECL_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Entity$ScannedEntity, DEFAULT_XMLDECL_BUFFER_SIZE)},
	{"DEFAULT_INTERNAL_BUFFER_SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Entity$ScannedEntity, DEFAULT_INTERNAL_BUFFER_SIZE)},
	{"stream", "Ljava/io/InputStream;", nullptr, $PUBLIC, $field(Entity$ScannedEntity, stream)},
	{"reader", "Ljava/io/Reader;", nullptr, $PUBLIC, $field(Entity$ScannedEntity, reader)},
	{"entityLocation", "Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;", nullptr, $PUBLIC, $field(Entity$ScannedEntity, entityLocation)},
	{"encoding", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Entity$ScannedEntity, encoding)},
	{"literal", "Z", nullptr, $PUBLIC, $field(Entity$ScannedEntity, literal)},
	{"isExternal", "Z", nullptr, $PUBLIC, $field(Entity$ScannedEntity, isExternal$)},
	{"version", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Entity$ScannedEntity, version)},
	{"ch", "[C", nullptr, $PUBLIC, $field(Entity$ScannedEntity, ch)},
	{"position", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, position)},
	{"count", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, count)},
	{"lineNumber", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, lineNumber)},
	{"columnNumber", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, columnNumber)},
	{"declaredEncoding", "Z", nullptr, 0, $field(Entity$ScannedEntity, declaredEncoding)},
	{"externallySpecifiedEncoding", "Z", nullptr, 0, $field(Entity$ScannedEntity, externallySpecifiedEncoding)},
	{"xmlVersion", "Ljava/lang/String;", nullptr, $PUBLIC, $field(Entity$ScannedEntity, xmlVersion)},
	{"fTotalCountTillLastLoad", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, fTotalCountTillLastLoad)},
	{"fLastCount", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, fLastCount)},
	{"baseCharOffset", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, baseCharOffset)},
	{"startPosition", "I", nullptr, $PUBLIC, $field(Entity$ScannedEntity, startPosition)},
	{"mayReadChunks", "Z", nullptr, $PUBLIC, $field(Entity$ScannedEntity, mayReadChunks)},
	{"xmlDeclChunkRead", "Z", nullptr, $PUBLIC, $field(Entity$ScannedEntity, xmlDeclChunkRead)},
	{"isGE", "Z", nullptr, $PUBLIC, $field(Entity$ScannedEntity, isGE)},
	{}
};

$MethodInfo _Entity$ScannedEntity_MethodInfo_[] = {
	{"<init>", "(ZLjava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/io/InputStream;Ljava/io/Reader;Ljava/lang/String;ZZZ)V", nullptr, $PUBLIC, $method(Entity$ScannedEntity, init$, void, bool, $String*, $XMLResourceIdentifier*, $InputStream*, $Reader*, $String*, bool, bool, bool)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, close, void), "java.io.IOException"},
	{"getEncodingName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, getEncodingName, $String*)},
	{"getEntityInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, getEntityInputStream, $InputStream*)},
	{"getEntityReader", "()Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, getEntityReader, $Reader*)},
	{"getEntityVersion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, getEntityVersion, $String*)},
	{"isDeclaredEncoding", "()Z", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, isDeclaredEncoding, bool)},
	{"isEncodingExternallySpecified", "()Z", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, isEncodingExternallySpecified, bool)},
	{"isExternal", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Entity$ScannedEntity, isExternal, bool)},
	{"isUnparsed", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Entity$ScannedEntity, isUnparsed, bool)},
	{"setDeclaredEncoding", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, setDeclaredEncoding, void, bool)},
	{"setEncodingExternallySpecified", "(Z)V", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, setEncodingExternallySpecified, void, bool)},
	{"setEntityVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, setEntityVersion, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Entity$ScannedEntity, toString, $String*)},
	{}
};

$InnerClassInfo _Entity$ScannedEntity_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.Entity$ScannedEntity", "com.sun.xml.internal.stream.Entity", "ScannedEntity", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Entity$ScannedEntity_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.Entity$ScannedEntity",
	"com.sun.xml.internal.stream.Entity",
	nullptr,
	_Entity$ScannedEntity_FieldInfo_,
	_Entity$ScannedEntity_MethodInfo_,
	nullptr,
	nullptr,
	_Entity$ScannedEntity_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.Entity"
};

$Object* allocate$Entity$ScannedEntity($Class* clazz) {
	return $of($alloc(Entity$ScannedEntity));
}

$String* Entity$ScannedEntity::getEncodingName() {
	return this->encoding;
}

$String* Entity$ScannedEntity::getEntityVersion() {
	return this->version;
}

void Entity$ScannedEntity::setEntityVersion($String* version) {
	$set(this, version, version);
}

$Reader* Entity$ScannedEntity::getEntityReader() {
	return this->reader;
}

$InputStream* Entity$ScannedEntity::getEntityInputStream() {
	return this->stream;
}

void Entity$ScannedEntity::init$(bool isGE, $String* name, $XMLResourceIdentifier* entityLocation, $InputStream* stream, $Reader* reader, $String* encoding, bool literal, bool mayReadChunks, bool isExternal) {
	$Entity::init$();
	this->fBufferSize = Entity$ScannedEntity::DEFAULT_BUFFER_SIZE;
	$set(this, ch, nullptr);
	this->lineNumber = 1;
	this->columnNumber = 1;
	this->declaredEncoding = false;
	this->externallySpecifiedEncoding = false;
	$set(this, xmlVersion, "1.0"_s);
	this->xmlDeclChunkRead = false;
	this->isGE = false;
	this->isGE = isGE;
	$set(this, name, name);
	$set(this, entityLocation, entityLocation);
	$set(this, stream, stream);
	$set(this, reader, reader);
	$set(this, encoding, encoding);
	this->literal = literal;
	this->mayReadChunks = mayReadChunks;
	this->isExternal$ = isExternal;
	int32_t size = isExternal ? this->fBufferSize : Entity$ScannedEntity::DEFAULT_INTERNAL_BUFFER_SIZE;
	$var($BufferAllocator, ba, $ThreadLocalBufferAllocator::getBufferAllocator());
	$set(this, ch, $nc(ba)->getCharBuffer(size));
	if (this->ch == nullptr) {
		$set(this, ch, $new($chars, size));
	}
}

void Entity$ScannedEntity::close() {
	$var($BufferAllocator, ba, $ThreadLocalBufferAllocator::getBufferAllocator());
	$nc(ba)->returnCharBuffer(this->ch);
	$set(this, ch, nullptr);
	$nc(this->reader)->close();
}

bool Entity$ScannedEntity::isEncodingExternallySpecified() {
	return this->externallySpecifiedEncoding;
}

void Entity$ScannedEntity::setEncodingExternallySpecified(bool value) {
	this->externallySpecifiedEncoding = value;
}

bool Entity$ScannedEntity::isDeclaredEncoding() {
	return this->declaredEncoding;
}

void Entity$ScannedEntity::setDeclaredEncoding(bool value) {
	this->declaredEncoding = value;
}

bool Entity$ScannedEntity::isExternal() {
	return this->isExternal$;
}

bool Entity$ScannedEntity::isUnparsed() {
	return false;
}

$String* Entity$ScannedEntity::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, str, $new($StringBuffer));
	str->append($$str({"name=\""_s, this->name, $$str(u'\"')}));
	str->append($$str({",ch="_s, $$new($String, this->ch)}));
	str->append($$str({",position="_s, $$str(this->position)}));
	str->append($$str({",count="_s, $$str(this->count)}));
	return str->toString();
}

Entity$ScannedEntity::Entity$ScannedEntity() {
}

$Class* Entity$ScannedEntity::load$($String* name, bool initialize) {
	$loadClass(Entity$ScannedEntity, name, initialize, &_Entity$ScannedEntity_ClassInfo_, allocate$Entity$ScannedEntity);
	return class$;
}

$Class* Entity$ScannedEntity::class$ = nullptr;

				} // stream
			} // internal
		} // xml
	} // sun
} // com