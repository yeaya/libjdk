#include <javax/sql/RowSet.h>

#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/math/BigDecimal.h>
#include <java/net/URL.h>
#include <java/sql/Array.h>
#include <java/sql/Blob.h>
#include <java/sql/Clob.h>
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
	{"addRowSetListener", "(Ljavax/sql/RowSetListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, addRowSetListener, void, $RowSetListener*)},
	{"clearParameters", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, clearParameters, void), "java.sql.SQLException"},
	{"execute", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, execute, void), "java.sql.SQLException"},
	{"getCommand", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getCommand, $String*)},
	{"getDataSourceName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getDataSourceName, $String*)},
	{"getEscapeProcessing", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getEscapeProcessing, bool), "java.sql.SQLException"},
	{"getMaxFieldSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getMaxFieldSize, int32_t), "java.sql.SQLException"},
	{"getMaxRows", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getMaxRows, int32_t), "java.sql.SQLException"},
	{"getPassword", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getPassword, $String*)},
	{"getQueryTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getQueryTimeout, int32_t), "java.sql.SQLException"},
	{"getTransactionIsolation", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getTransactionIsolation, int32_t)},
	{"getTypeMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getTypeMap, $Map*), "java.sql.SQLException"},
	{"getUrl", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getUrl, $String*), "java.sql.SQLException"},
	{"getUsername", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, getUsername, $String*)},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, isReadOnly, bool)},
	{"removeRowSetListener", "(Ljavax/sql/RowSetListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, removeRowSetListener, void, $RowSetListener*)},
	{"setArray", "(ILjava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setArray, void, int32_t, $1Array*), "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setAsciiStream, void, int32_t, $InputStream*, int32_t), "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setAsciiStream, void, $String*, $InputStream*, int32_t), "java.sql.SQLException"},
	{"setAsciiStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setAsciiStream, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setAsciiStream, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"setBigDecimal", "(ILjava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBigDecimal, void, int32_t, $BigDecimal*), "java.sql.SQLException"},
	{"setBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBigDecimal, void, $String*, $BigDecimal*), "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBinaryStream, void, int32_t, $InputStream*, int32_t), "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBinaryStream, void, $String*, $InputStream*, int32_t), "java.sql.SQLException"},
	{"setBinaryStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBinaryStream, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBinaryStream, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"setBlob", "(ILjava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBlob, void, int32_t, $Blob*), "java.sql.SQLException"},
	{"setBlob", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBlob, void, int32_t, $InputStream*, int64_t), "java.sql.SQLException"},
	{"setBlob", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBlob, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBlob, void, $String*, $InputStream*, int64_t), "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBlob, void, $String*, $Blob*), "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBlob, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"setBoolean", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBoolean, void, int32_t, bool), "java.sql.SQLException"},
	{"setBoolean", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBoolean, void, $String*, bool), "java.sql.SQLException"},
	{"setByte", "(IB)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setByte, void, int32_t, int8_t), "java.sql.SQLException"},
	{"setByte", "(Ljava/lang/String;B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setByte, void, $String*, int8_t), "java.sql.SQLException"},
	{"setBytes", "(I[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBytes, void, int32_t, $bytes*), "java.sql.SQLException"},
	{"setBytes", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setBytes, void, $String*, $bytes*), "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setCharacterStream, void, int32_t, $Reader*, int32_t), "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setCharacterStream, void, $String*, $Reader*, int32_t), "java.sql.SQLException"},
	{"setCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setCharacterStream, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setCharacterStream, void, $String*, $Reader*), "java.sql.SQLException"},
	{"setClob", "(ILjava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setClob, void, int32_t, $Clob*), "java.sql.SQLException"},
	{"setClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setClob, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"setClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setClob, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setClob, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setClob, void, $String*, $Clob*), "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setClob, void, $String*, $Reader*), "java.sql.SQLException"},
	{"setCommand", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setCommand, void, $String*), "java.sql.SQLException"},
	{"setConcurrency", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setConcurrency, void, int32_t), "java.sql.SQLException"},
	{"setDataSourceName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setDataSourceName, void, $String*), "java.sql.SQLException"},
	{"setDate", "(ILjava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setDate, void, int32_t, $Date*), "java.sql.SQLException"},
	{"setDate", "(ILjava/sql/Date;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setDate, void, int32_t, $Date*, $Calendar*), "java.sql.SQLException"},
	{"setDate", "(Ljava/lang/String;Ljava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setDate, void, $String*, $Date*), "java.sql.SQLException"},
	{"setDate", "(Ljava/lang/String;Ljava/sql/Date;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setDate, void, $String*, $Date*, $Calendar*), "java.sql.SQLException"},
	{"setDouble", "(ID)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setDouble, void, int32_t, double), "java.sql.SQLException"},
	{"setDouble", "(Ljava/lang/String;D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setDouble, void, $String*, double), "java.sql.SQLException"},
	{"setEscapeProcessing", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setEscapeProcessing, void, bool), "java.sql.SQLException"},
	{"setFloat", "(IF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setFloat, void, int32_t, float), "java.sql.SQLException"},
	{"setFloat", "(Ljava/lang/String;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setFloat, void, $String*, float), "java.sql.SQLException"},
	{"setInt", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setInt, void, int32_t, int32_t), "java.sql.SQLException"},
	{"setInt", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setInt, void, $String*, int32_t), "java.sql.SQLException"},
	{"setLong", "(IJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setLong, void, int32_t, int64_t), "java.sql.SQLException"},
	{"setLong", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setLong, void, $String*, int64_t), "java.sql.SQLException"},
	{"setMaxFieldSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setMaxFieldSize, void, int32_t), "java.sql.SQLException"},
	{"setMaxRows", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setMaxRows, void, int32_t), "java.sql.SQLException"},
	{"setNCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNCharacterStream, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"setNCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNCharacterStream, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNCharacterStream, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNCharacterStream, void, $String*, $Reader*), "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNClob, void, $String*, $NClob*), "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNClob, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNClob, void, $String*, $Reader*), "java.sql.SQLException"},
	{"setNClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNClob, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"setNClob", "(ILjava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNClob, void, int32_t, $NClob*), "java.sql.SQLException"},
	{"setNClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNClob, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"setNString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNString, void, int32_t, $String*), "java.sql.SQLException"},
	{"setNString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNString, void, $String*, $String*), "java.sql.SQLException"},
	{"setNull", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNull, void, int32_t, int32_t), "java.sql.SQLException"},
	{"setNull", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNull, void, $String*, int32_t), "java.sql.SQLException"},
	{"setNull", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNull, void, int32_t, int32_t, $String*), "java.sql.SQLException"},
	{"setNull", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setNull, void, $String*, int32_t, $String*), "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setObject, void, int32_t, Object$*, int32_t, int32_t), "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setObject, void, $String*, Object$*, int32_t, int32_t), "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setObject, void, int32_t, Object$*, int32_t), "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setObject, void, $String*, Object$*, int32_t), "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setObject, void, $String*, Object$*), "java.sql.SQLException"},
	{"setObject", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setObject, void, int32_t, Object$*), "java.sql.SQLException"},
	{"setPassword", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setPassword, void, $String*), "java.sql.SQLException"},
	{"setQueryTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setQueryTimeout, void, int32_t), "java.sql.SQLException"},
	{"setReadOnly", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setReadOnly, void, bool), "java.sql.SQLException"},
	{"setRef", "(ILjava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setRef, void, int32_t, $Ref*), "java.sql.SQLException"},
	{"setRowId", "(ILjava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setRowId, void, int32_t, $RowId*), "java.sql.SQLException"},
	{"setRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setRowId, void, $String*, $RowId*), "java.sql.SQLException"},
	{"setSQLXML", "(ILjava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setSQLXML, void, int32_t, $SQLXML*), "java.sql.SQLException"},
	{"setSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setSQLXML, void, $String*, $SQLXML*), "java.sql.SQLException"},
	{"setShort", "(IS)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setShort, void, int32_t, int16_t), "java.sql.SQLException"},
	{"setShort", "(Ljava/lang/String;S)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setShort, void, $String*, int16_t), "java.sql.SQLException"},
	{"setString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setString, void, int32_t, $String*), "java.sql.SQLException"},
	{"setString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setString, void, $String*, $String*), "java.sql.SQLException"},
	{"setTime", "(ILjava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTime, void, int32_t, $Time*), "java.sql.SQLException"},
	{"setTime", "(ILjava/sql/Time;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTime, void, int32_t, $Time*, $Calendar*), "java.sql.SQLException"},
	{"setTime", "(Ljava/lang/String;Ljava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTime, void, $String*, $Time*), "java.sql.SQLException"},
	{"setTime", "(Ljava/lang/String;Ljava/sql/Time;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTime, void, $String*, $Time*, $Calendar*), "java.sql.SQLException"},
	{"setTimestamp", "(ILjava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTimestamp, void, int32_t, $Timestamp*), "java.sql.SQLException"},
	{"setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTimestamp, void, $String*, $Timestamp*), "java.sql.SQLException"},
	{"setTimestamp", "(ILjava/sql/Timestamp;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTimestamp, void, int32_t, $Timestamp*, $Calendar*), "java.sql.SQLException"},
	{"setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTimestamp, void, $String*, $Timestamp*, $Calendar*), "java.sql.SQLException"},
	{"setTransactionIsolation", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTransactionIsolation, void, int32_t), "java.sql.SQLException"},
	{"setType", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setType, void, int32_t), "java.sql.SQLException"},
	{"setTypeMap", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setTypeMap, void, $Map*), "java.sql.SQLException"},
	{"setURL", "(ILjava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setURL, void, int32_t, $URL*), "java.sql.SQLException"},
	{"setUrl", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setUrl, void, $String*), "java.sql.SQLException"},
	{"setUsername", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSet, setUsername, void, $String*), "java.sql.SQLException"},
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