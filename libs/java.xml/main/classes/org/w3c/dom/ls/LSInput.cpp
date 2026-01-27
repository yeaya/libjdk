#include <org/w3c/dom/ls/LSInput.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$MethodInfo _LSInput_MethodInfo_[] = {
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, getBaseURI, $String*)},
	{"getByteStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, getByteStream, $InputStream*)},
	{"getCertifiedText", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, getCertifiedText, bool)},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, getCharacterStream, $Reader*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, getEncoding, $String*)},
	{"getPublicId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, getPublicId, $String*)},
	{"getStringData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, getStringData, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, getSystemId, $String*)},
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, setBaseURI, void, $String*)},
	{"setByteStream", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, setByteStream, void, $InputStream*)},
	{"setCertifiedText", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, setCertifiedText, void, bool)},
	{"setCharacterStream", "(Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, setCharacterStream, void, $Reader*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, setEncoding, void, $String*)},
	{"setPublicId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, setPublicId, void, $String*)},
	{"setStringData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, setStringData, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSInput, setSystemId, void, $String*)},
	{}
};

$ClassInfo _LSInput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.LSInput",
	nullptr,
	nullptr,
	nullptr,
	_LSInput_MethodInfo_
};

$Object* allocate$LSInput($Class* clazz) {
	return $of($alloc(LSInput));
}

$Class* LSInput::load$($String* name, bool initialize) {
	$loadClass(LSInput, name, initialize, &_LSInput_ClassInfo_, allocate$LSInput);
	return class$;
}

$Class* LSInput::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org