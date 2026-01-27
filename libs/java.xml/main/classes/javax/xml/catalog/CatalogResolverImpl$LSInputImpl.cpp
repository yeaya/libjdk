#include <javax/xml/catalog/CatalogResolverImpl$LSInputImpl.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <javax/xml/catalog/CatalogResolverImpl.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CatalogResolverImpl = ::javax::xml::catalog::CatalogResolverImpl;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _CatalogResolverImpl$LSInputImpl_FieldInfo_[] = {
	{"this$0", "Ljavax/xml/catalog/CatalogResolverImpl;", nullptr, $FINAL | $SYNTHETIC, $field(CatalogResolverImpl$LSInputImpl, this$0)},
	{"systemId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CatalogResolverImpl$LSInputImpl, systemId)},
	{}
};

$MethodInfo _CatalogResolverImpl$LSInputImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/catalog/CatalogResolverImpl;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CatalogResolverImpl$LSInputImpl, init$, void, $CatalogResolverImpl*, $String*)},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, getBaseURI, $String*)},
	{"getByteStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, getByteStream, $InputStream*)},
	{"getCertifiedText", "()Z", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, getCertifiedText, bool)},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, getCharacterStream, $Reader*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, getEncoding, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, getPublicId, $String*)},
	{"getStringData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, getStringData, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, getSystemId, $String*)},
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, setBaseURI, void, $String*)},
	{"setByteStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, setByteStream, void, $InputStream*)},
	{"setCertifiedText", "(Z)V", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, setCertifiedText, void, bool)},
	{"setCharacterStream", "(Ljava/io/Reader;)V", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, setCharacterStream, void, $Reader*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, setEncoding, void, $String*)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, setPublicId, void, $String*)},
	{"setStringData", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, setStringData, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl$LSInputImpl, setSystemId, void, $String*)},
	{}
};

$InnerClassInfo _CatalogResolverImpl$LSInputImpl_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogResolverImpl$LSInputImpl", "javax.xml.catalog.CatalogResolverImpl", "LSInputImpl", 0},
	{}
};

$ClassInfo _CatalogResolverImpl$LSInputImpl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.CatalogResolverImpl$LSInputImpl",
	"java.lang.Object",
	"org.w3c.dom.ls.LSInput",
	_CatalogResolverImpl$LSInputImpl_FieldInfo_,
	_CatalogResolverImpl$LSInputImpl_MethodInfo_,
	nullptr,
	nullptr,
	_CatalogResolverImpl$LSInputImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogResolverImpl"
};

$Object* allocate$CatalogResolverImpl$LSInputImpl($Class* clazz) {
	return $of($alloc(CatalogResolverImpl$LSInputImpl));
}

void CatalogResolverImpl$LSInputImpl::init$($CatalogResolverImpl* this$0, $String* systemId) {
	$set(this, this$0, this$0);
	$set(this, systemId, systemId);
}

$Reader* CatalogResolverImpl$LSInputImpl::getCharacterStream() {
	return nullptr;
}

void CatalogResolverImpl$LSInputImpl::setCharacterStream($Reader* characterStream) {
}

$InputStream* CatalogResolverImpl$LSInputImpl::getByteStream() {
	return nullptr;
}

void CatalogResolverImpl$LSInputImpl::setByteStream($InputStream* byteStream) {
}

$String* CatalogResolverImpl$LSInputImpl::getStringData() {
	return nullptr;
}

void CatalogResolverImpl$LSInputImpl::setStringData($String* stringData) {
}

$String* CatalogResolverImpl$LSInputImpl::getSystemId() {
	return this->systemId;
}

void CatalogResolverImpl$LSInputImpl::setSystemId($String* systemId) {
	$set(this, systemId, systemId);
}

$String* CatalogResolverImpl$LSInputImpl::getPublicId() {
	return nullptr;
}

void CatalogResolverImpl$LSInputImpl::setPublicId($String* publicId) {
}

$String* CatalogResolverImpl$LSInputImpl::getBaseURI() {
	return nullptr;
}

void CatalogResolverImpl$LSInputImpl::setBaseURI($String* baseURI) {
}

$String* CatalogResolverImpl$LSInputImpl::getEncoding() {
	return nullptr;
}

void CatalogResolverImpl$LSInputImpl::setEncoding($String* encoding) {
}

bool CatalogResolverImpl$LSInputImpl::getCertifiedText() {
	return false;
}

void CatalogResolverImpl$LSInputImpl::setCertifiedText(bool certifiedText) {
}

CatalogResolverImpl$LSInputImpl::CatalogResolverImpl$LSInputImpl() {
}

$Class* CatalogResolverImpl$LSInputImpl::load$($String* name, bool initialize) {
	$loadClass(CatalogResolverImpl$LSInputImpl, name, initialize, &_CatalogResolverImpl$LSInputImpl_ClassInfo_, allocate$CatalogResolverImpl$LSInputImpl);
	return class$;
}

$Class* CatalogResolverImpl$LSInputImpl::class$ = nullptr;

		} // catalog
	} // xml
} // javax