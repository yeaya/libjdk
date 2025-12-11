#include <java/sql/Blob.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _Blob_MethodInfo_[] = {
	{"free", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBinaryStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBinaryStream", "(JJ)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getBytes", "(JI)[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"length", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"position", "([BJ)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"position", "(Ljava/sql/Blob;J)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(J)Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBytes", "(J[B)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBytes", "(J[BII)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"truncate", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
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