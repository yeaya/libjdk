#include <javax/sql/RowSet.h>

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
#include <java/sql/SQLXML.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <java/util/Calendar.h>
#include <java/util/Map.h>
#include <javax/sql/RowSetListener.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigDecimal = ::java::math::BigDecimal;
using $URL = ::java::net::URL;
using $1Array = ::java::sql::Array;
using $Blob = ::java::sql::Blob;
using $Clob = ::java::sql::Clob;
using $Date = ::java::sql::Date;
using $NClob = ::java::sql::NClob;
using $Ref = ::java::sql::Ref;
using $ResultSet = ::java::sql::ResultSet;
using $RowId = ::java::sql::RowId;
using $SQLXML = ::java::sql::SQLXML;
using $Time = ::java::sql::Time;
using $Timestamp = ::java::sql::Timestamp;
using $Calendar = ::java::util::Calendar;
using $Map = ::java::util::Map;
using $RowSetListener = ::javax::sql::RowSetListener;

namespace javax {
	namespace sql {

$MethodInfo _RowSet_MethodInfo_[] = {
	{"addRowSetListener", "(Ljavax/sql/RowSetListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"clearParameters", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"execute", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getCommand", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDataSourceName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getEscapeProcessing", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getMaxFieldSize", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getMaxRows", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getPassword", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getQueryTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getTransactionIsolation", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"getTypeMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getUrl", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getUsername", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeRowSetListener", "(Ljavax/sql/RowSetListener;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setArray", "(ILjava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBigDecimal", "(ILjava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(ILjava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBoolean", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBoolean", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setByte", "(IB)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setByte", "(Ljava/lang/String;B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBytes", "(I[B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setBytes", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(ILjava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setConcurrency", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDataSourceName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDate", "(ILjava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDate", "(ILjava/sql/Date;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDate", "(Ljava/lang/String;Ljava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDate", "(Ljava/lang/String;Ljava/sql/Date;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDouble", "(ID)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setDouble", "(Ljava/lang/String;D)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setEscapeProcessing", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setFloat", "(IF)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setFloat", "(Ljava/lang/String;F)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setInt", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setInt", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setLong", "(IJ)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setLong", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setMaxFieldSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setMaxRows", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(ILjava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNull", "(II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNull", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNull", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setNull", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setPassword", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setQueryTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setReadOnly", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setRef", "(ILjava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setRowId", "(ILjava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSQLXML", "(ILjava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setShort", "(IS)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setShort", "(Ljava/lang/String;S)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTime", "(ILjava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTime", "(ILjava/sql/Time;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTime", "(Ljava/lang/String;Ljava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTime", "(Ljava/lang/String;Ljava/sql/Time;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTimestamp", "(ILjava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTimestamp", "(ILjava/sql/Timestamp;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTransactionIsolation", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setType", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setTypeMap", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)V", $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setURL", "(ILjava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setUrl", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setUsername", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{}
};

$ClassInfo _RowSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.RowSet",
	nullptr,
	"java.sql.ResultSet",
	nullptr,
	_RowSet_MethodInfo_
};

$Object* allocate$RowSet($Class* clazz) {
	return $of($alloc(RowSet));
}

$Class* RowSet::load$($String* name, bool initialize) {
	$loadClass(RowSet, name, initialize, &_RowSet_ClassInfo_, allocate$RowSet);
	return class$;
}

$Class* RowSet::class$ = nullptr;

	} // sql
} // javax