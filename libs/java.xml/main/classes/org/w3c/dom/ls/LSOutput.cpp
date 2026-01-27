#include <org/w3c/dom/ls/LSOutput.h>

#include <java/io/OutputStream.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$MethodInfo _LSOutput_MethodInfo_[] = {
	{"getByteStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSOutput, getByteStream, $OutputStream*)},
	{"getCharacterStream", "()Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSOutput, getCharacterStream, $Writer*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSOutput, getEncoding, $String*)},
	{"getSystemId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSOutput, getSystemId, $String*)},
	{"setByteStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSOutput, setByteStream, void, $OutputStream*)},
	{"setCharacterStream", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSOutput, setCharacterStream, void, $Writer*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSOutput, setEncoding, void, $String*)},
	{"setSystemId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSOutput, setSystemId, void, $String*)},
	{}
};

$ClassInfo _LSOutput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.LSOutput",
	nullptr,
	nullptr,
	nullptr,
	_LSOutput_MethodInfo_
};

$Object* allocate$LSOutput($Class* clazz) {
	return $of($alloc(LSOutput));
}

$Class* LSOutput::load$($String* name, bool initialize) {
	$loadClass(LSOutput, name, initialize, &_LSOutput_ClassInfo_, allocate$LSOutput);
	return class$;
}

$Class* LSOutput::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org