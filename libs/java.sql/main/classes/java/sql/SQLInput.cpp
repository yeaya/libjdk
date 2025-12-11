#include <java/sql/SQLInput.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/math/BigDecimal.h>
#include <java/net/URL.h>
#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/Date.h>
#include <java/sql/NClob.h>
#include <java/sql/Ref.h>
#include <java/sql/RowId.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;

namespace java {
	namespace sql {

$MethodInfo _SQLInput_MethodInfo_[] = {
	{"readArray", "()Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readAsciiStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readBigDecimal", "()Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readBinaryStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readBlob", "()Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readByte", "()B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readBytes", "()[B", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readCharacterStream", "()Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readClob", "()Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readDate", "()Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readDouble", "()D", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readFloat", "()F", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readInt", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readLong", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readNClob", "()Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readNString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readObject", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readObject", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC, nullptr, "java.sql.SQLException"},
	{"readRef", "()Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readRowId", "()Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readSQLXML", "()Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readShort", "()S", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readTime", "()Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readTimestamp", "()Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"readURL", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"wasNull", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _SQLInput_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.SQLInput",
	nullptr,
	nullptr,
	nullptr,
	_SQLInput_MethodInfo_
};

$Object* allocate$SQLInput($Class* clazz) {
	return $of($alloc(SQLInput));
}

$Object* SQLInput::readObject($Class* type) {
	$throwNew($SQLFeatureNotSupportedException);
	$shouldNotReachHere();
}

$Class* SQLInput::load$($String* name, bool initialize) {
	$loadClass(SQLInput, name, initialize, &_SQLInput_ClassInfo_, allocate$SQLInput);
	return class$;
}

$Class* SQLInput::class$ = nullptr;

	} // sql
} // java