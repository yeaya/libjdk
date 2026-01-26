#include <java/sql/Clob.h>

#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Reader.h>
#include <java/io/Writer.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Reader = ::java::io::Reader;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _Clob_MethodInfo_[] = {
	{"free", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, free, void), "java.sql.SQLException"},
	{"getAsciiStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, getAsciiStream, $InputStream*), "java.sql.SQLException"},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, getCharacterStream, $Reader*), "java.sql.SQLException"},
	{"getCharacterStream", "(JJ)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, getCharacterStream, $Reader*, int64_t, int64_t), "java.sql.SQLException"},
	{"getSubString", "(JI)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, getSubString, $String*, int64_t, int32_t), "java.sql.SQLException"},
	{"length", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, length, int64_t), "java.sql.SQLException"},
	{"position", "(Ljava/lang/String;J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, position, int64_t, $String*, int64_t), "java.sql.SQLException"},
	{"position", "(Ljava/sql/Clob;J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, position, int64_t, Clob*, int64_t), "java.sql.SQLException"},
	{"setAsciiStream", "(J)Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, setAsciiStream, $OutputStream*, int64_t), "java.sql.SQLException"},
	{"setCharacterStream", "(J)Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, setCharacterStream, $Writer*, int64_t), "java.sql.SQLException"},
	{"setString", "(JLjava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, setString, int32_t, int64_t, $String*), "java.sql.SQLException"},
	{"setString", "(JLjava/lang/String;II)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, setString, int32_t, int64_t, $String*, int32_t, int32_t), "java.sql.SQLException"},
	{"truncate", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Clob, truncate, void, int64_t), "java.sql.SQLException"},
	{}
};

$ClassInfo _Clob_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Clob",
	nullptr,
	nullptr,
	nullptr,
	_Clob_MethodInfo_
};

$Object* allocate$Clob($Class* clazz) {
	return $of($alloc(Clob));
}

$Class* Clob::load$($String* name, bool initialize) {
	$loadClass(Clob, name, initialize, &_Clob_ClassInfo_, allocate$Clob);
	return class$;
}

$Class* Clob::class$ = nullptr;

	} // sql
} // java