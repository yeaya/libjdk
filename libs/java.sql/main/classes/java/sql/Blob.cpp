#include <java/sql/Blob.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _Blob_MethodInfo_[] = {
	{"free", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, free, void), "java.sql.SQLException"},
	{"getBinaryStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, getBinaryStream, $InputStream*), "java.sql.SQLException"},
	{"getBinaryStream", "(JJ)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, getBinaryStream, $InputStream*, int64_t, int64_t), "java.sql.SQLException"},
	{"getBytes", "(JI)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, getBytes, $bytes*, int64_t, int32_t), "java.sql.SQLException"},
	{"length", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, length, int64_t), "java.sql.SQLException"},
	{"position", "([BJ)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, position, int64_t, $bytes*, int64_t), "java.sql.SQLException"},
	{"position", "(Ljava/sql/Blob;J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, position, int64_t, Blob*, int64_t), "java.sql.SQLException"},
	{"setBinaryStream", "(J)Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, setBinaryStream, $OutputStream*, int64_t), "java.sql.SQLException"},
	{"setBytes", "(J[B)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, setBytes, int32_t, int64_t, $bytes*), "java.sql.SQLException"},
	{"setBytes", "(J[BII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, setBytes, int32_t, int64_t, $bytes*, int32_t, int32_t), "java.sql.SQLException"},
	{"truncate", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Blob, truncate, void, int64_t), "java.sql.SQLException"},
	{}
};

$ClassInfo _Blob_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Blob",
	nullptr,
	nullptr,
	nullptr,
	_Blob_MethodInfo_
};

$Object* allocate$Blob($Class* clazz) {
	return $of($alloc(Blob));
}

$Class* Blob::load$($String* name, bool initialize) {
	$loadClass(Blob, name, initialize, &_Blob_ClassInfo_, allocate$Blob);
	return class$;
}

$Class* Blob::class$ = nullptr;

	} // sql
} // java