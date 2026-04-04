#include <java/rmi/server/RemoteCall.h>
#include <java/io/ObjectInput.h>
#include <java/io/ObjectOutput.h>
#include <jcpp.h>

using $ObjectInput = ::java::io::ObjectInput;
using $ObjectOutput = ::java::io::ObjectOutput;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace rmi {
		namespace server {

$Class* RemoteCall::load$($String* name, bool initialize) {
	$CompoundAttribute donemethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute executeCallmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getInputStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getOutputStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute getResultStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute releaseInputStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$CompoundAttribute releaseOutputStreammethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"done", "()V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteCall, done, void), "java.io.IOException", nullptr, donemethodAnnotations$$},
		{"executeCall", "()V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteCall, executeCall, void), "java.lang.Exception", nullptr, executeCallmethodAnnotations$$},
		{"getInputStream", "()Ljava/io/ObjectInput;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteCall, getInputStream, $ObjectInput*), "java.io.IOException", nullptr, getInputStreammethodAnnotations$$},
		{"getOutputStream", "()Ljava/io/ObjectOutput;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteCall, getOutputStream, $ObjectOutput*), "java.io.IOException", nullptr, getOutputStreammethodAnnotations$$},
		{"getResultStream", "(Z)Ljava/io/ObjectOutput;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteCall, getResultStream, $ObjectOutput*, bool), "java.io.IOException,java.io.StreamCorruptedException", nullptr, getResultStreammethodAnnotations$$},
		{"releaseInputStream", "()V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteCall, releaseInputStream, void), "java.io.IOException", nullptr, releaseInputStreammethodAnnotations$$},
		{"releaseOutputStream", "()V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(RemoteCall, releaseOutputStream, void), "java.io.IOException", nullptr, releaseOutputStreammethodAnnotations$$},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.server.RemoteCall",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(RemoteCall, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RemoteCall);
	});
	return class$;
}

$Class* RemoteCall::class$ = nullptr;

		} // server
	} // rmi
} // java