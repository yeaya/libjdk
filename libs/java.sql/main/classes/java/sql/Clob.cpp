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
	{"free", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getAsciiStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getCharacterStream", "(JJ)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getSubString", "(JI)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"length", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"position", "(Ljava/lang/String;J)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"position", "(Ljava/sql/Clob;J)J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(J)Ljava/io/OutputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(J)Ljava/io/Writer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setString", "(JLjava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setString", "(JLjava/lang/String;II)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"truncate", "(J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
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