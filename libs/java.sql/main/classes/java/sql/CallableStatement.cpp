#include <java/sql/CallableStatement.h>

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
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLType.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <java/util/Calendar.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $BigDecimal = ::java::math::BigDecimal;
using $URL = ::java::net::URL;
using $1Array = ::java::sql::Array;
using $Blob = ::java::sql::Blob;
using $Clob = ::java::sql::Clob;
using $Date = ::java::sql::Date;
using $NClob = ::java::sql::NClob;
using $Ref = ::java::sql::Ref;
using $RowId = ::java::sql::RowId;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLType = ::java::sql::SQLType;
using $SQLXML = ::java::sql::SQLXML;
using $Time = ::java::sql::Time;
using $Timestamp = ::java::sql::Timestamp;
using $Calendar = ::java::util::Calendar;
using $Map = ::java::util::Map;

namespace java {
	namespace sql {

$NamedAttribute CallableStatement_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _CallableStatement_MethodAnnotations_getBigDecimal2[] = {
	{"Ljava/lang/Deprecated;", CallableStatement_Attribute_var$0},
	{}
};

$MethodInfo _CallableStatement_MethodInfo_[] = {
	{"getArray", "(I)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getArray, $1Array*, int32_t), "java.sql.SQLException"},
	{"getArray", "(Ljava/lang/String;)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getArray, $1Array*, $String*), "java.sql.SQLException"},
	{"getBigDecimal", "(II)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(CallableStatement, getBigDecimal, $BigDecimal*, int32_t, int32_t), "java.sql.SQLException", nullptr, _CallableStatement_MethodAnnotations_getBigDecimal2},
	{"getBigDecimal", "(I)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getBigDecimal, $BigDecimal*, int32_t), "java.sql.SQLException"},
	{"getBigDecimal", "(Ljava/lang/String;)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getBigDecimal, $BigDecimal*, $String*), "java.sql.SQLException"},
	{"getBlob", "(I)Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getBlob, $Blob*, int32_t), "java.sql.SQLException"},
	{"getBlob", "(Ljava/lang/String;)Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getBlob, $Blob*, $String*), "java.sql.SQLException"},
	{"getBoolean", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getBoolean, bool, int32_t), "java.sql.SQLException"},
	{"getBoolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getBoolean, bool, $String*), "java.sql.SQLException"},
	{"getByte", "(I)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getByte, int8_t, int32_t), "java.sql.SQLException"},
	{"getByte", "(Ljava/lang/String;)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getByte, int8_t, $String*), "java.sql.SQLException"},
	{"getBytes", "(I)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getBytes, $bytes*, int32_t), "java.sql.SQLException"},
	{"getBytes", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getBytes, $bytes*, $String*), "java.sql.SQLException"},
	{"getCharacterStream", "(I)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getCharacterStream, $Reader*, int32_t), "java.sql.SQLException"},
	{"getCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getCharacterStream, $Reader*, $String*), "java.sql.SQLException"},
	{"getClob", "(I)Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getClob, $Clob*, int32_t), "java.sql.SQLException"},
	{"getClob", "(Ljava/lang/String;)Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getClob, $Clob*, $String*), "java.sql.SQLException"},
	{"getDate", "(I)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getDate, $Date*, int32_t), "java.sql.SQLException"},
	{"getDate", "(ILjava/util/Calendar;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getDate, $Date*, int32_t, $Calendar*), "java.sql.SQLException"},
	{"getDate", "(Ljava/lang/String;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getDate, $Date*, $String*), "java.sql.SQLException"},
	{"getDate", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getDate, $Date*, $String*, $Calendar*), "java.sql.SQLException"},
	{"getDouble", "(I)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getDouble, double, int32_t), "java.sql.SQLException"},
	{"getDouble", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getDouble, double, $String*), "java.sql.SQLException"},
	{"getFloat", "(I)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getFloat, float, int32_t), "java.sql.SQLException"},
	{"getFloat", "(Ljava/lang/String;)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getFloat, float, $String*), "java.sql.SQLException"},
	{"getInt", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getInt, int32_t, int32_t), "java.sql.SQLException"},
	{"getInt", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getInt, int32_t, $String*), "java.sql.SQLException"},
	{"getLong", "(I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getLong, int64_t, int32_t), "java.sql.SQLException"},
	{"getLong", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getLong, int64_t, $String*), "java.sql.SQLException"},
	{"getNCharacterStream", "(I)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getNCharacterStream, $Reader*, int32_t), "java.sql.SQLException"},
	{"getNCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getNCharacterStream, $Reader*, $String*), "java.sql.SQLException"},
	{"getNClob", "(I)Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getNClob, $NClob*, int32_t), "java.sql.SQLException"},
	{"getNClob", "(Ljava/lang/String;)Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getNClob, $NClob*, $String*), "java.sql.SQLException"},
	{"getNString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getNString, $String*, int32_t), "java.sql.SQLException"},
	{"getNString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getNString, $String*, $String*), "java.sql.SQLException"},
	{"getObject", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getObject, $Object*, int32_t), "java.sql.SQLException"},
	{"getObject", "(ILjava/util/Map;)Ljava/lang/Object;", "(ILjava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getObject, $Object*, int32_t, $Map*), "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getObject, $Object*, $String*), "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getObject, $Object*, $String*, $Map*), "java.sql.SQLException"},
	{"getObject", "(ILjava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(ILjava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getObject, $Object*, int32_t, $Class*), "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getObject, $Object*, $String*, $Class*), "java.sql.SQLException"},
	{"getRef", "(I)Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getRef, $Ref*, int32_t), "java.sql.SQLException"},
	{"getRef", "(Ljava/lang/String;)Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getRef, $Ref*, $String*), "java.sql.SQLException"},
	{"getRowId", "(I)Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getRowId, $RowId*, int32_t), "java.sql.SQLException"},
	{"getRowId", "(Ljava/lang/String;)Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getRowId, $RowId*, $String*), "java.sql.SQLException"},
	{"getSQLXML", "(I)Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getSQLXML, $SQLXML*, int32_t), "java.sql.SQLException"},
	{"getSQLXML", "(Ljava/lang/String;)Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getSQLXML, $SQLXML*, $String*), "java.sql.SQLException"},
	{"getShort", "(I)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getShort, int16_t, int32_t), "java.sql.SQLException"},
	{"getShort", "(Ljava/lang/String;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getShort, int16_t, $String*), "java.sql.SQLException"},
	{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getString, $String*, int32_t), "java.sql.SQLException"},
	{"getString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getString, $String*, $String*), "java.sql.SQLException"},
	{"getTime", "(I)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getTime, $Time*, int32_t), "java.sql.SQLException"},
	{"getTime", "(ILjava/util/Calendar;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getTime, $Time*, int32_t, $Calendar*), "java.sql.SQLException"},
	{"getTime", "(Ljava/lang/String;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getTime, $Time*, $String*), "java.sql.SQLException"},
	{"getTime", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getTime, $Time*, $String*, $Calendar*), "java.sql.SQLException"},
	{"getTimestamp", "(I)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getTimestamp, $Timestamp*, int32_t), "java.sql.SQLException"},
	{"getTimestamp", "(ILjava/util/Calendar;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getTimestamp, $Timestamp*, int32_t, $Calendar*), "java.sql.SQLException"},
	{"getTimestamp", "(Ljava/lang/String;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getTimestamp, $Timestamp*, $String*), "java.sql.SQLException"},
	{"getTimestamp", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getTimestamp, $Timestamp*, $String*, $Calendar*), "java.sql.SQLException"},
	{"getURL", "(I)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getURL, $URL*, int32_t), "java.sql.SQLException"},
	{"getURL", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, getURL, $URL*, $String*), "java.sql.SQLException"},
	{"registerOutParameter", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, registerOutParameter, void, int32_t, int32_t), "java.sql.SQLException"},
	{"registerOutParameter", "(III)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, registerOutParameter, void, int32_t, int32_t, int32_t), "java.sql.SQLException"},
	{"registerOutParameter", "(IILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, registerOutParameter, void, int32_t, int32_t, $String*), "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, registerOutParameter, void, $String*, int32_t), "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, registerOutParameter, void, $String*, int32_t, int32_t), "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, registerOutParameter, void, $String*, int32_t, $String*), "java.sql.SQLException"},
	{"registerOutParameter", "(ILjava/sql/SQLType;)V", nullptr, $PUBLIC, $virtualMethod(CallableStatement, registerOutParameter, void, int32_t, $SQLType*), "java.sql.SQLException"},
	{"registerOutParameter", "(ILjava/sql/SQLType;I)V", nullptr, $PUBLIC, $virtualMethod(CallableStatement, registerOutParameter, void, int32_t, $SQLType*, int32_t), "java.sql.SQLException"},
	{"registerOutParameter", "(ILjava/sql/SQLType;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CallableStatement, registerOutParameter, void, int32_t, $SQLType*, $String*), "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, $virtualMethod(CallableStatement, registerOutParameter, void, $String*, $SQLType*), "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, $virtualMethod(CallableStatement, registerOutParameter, void, $String*, $SQLType*, int32_t), "java.sql.SQLException"},
	{"registerOutParameter", "(Ljava/lang/String;Ljava/sql/SQLType;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CallableStatement, registerOutParameter, void, $String*, $SQLType*, $String*), "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setAsciiStream, void, $String*, $InputStream*, int32_t), "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setAsciiStream, void, $String*, $InputStream*, int64_t), "java.sql.SQLException"},
	{"setAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setAsciiStream, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"setBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBigDecimal, void, $String*, $BigDecimal*), "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBinaryStream, void, $String*, $InputStream*, int32_t), "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBinaryStream, void, $String*, $InputStream*, int64_t), "java.sql.SQLException"},
	{"setBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBinaryStream, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBlob, void, $String*, $InputStream*, int64_t), "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBlob, void, $String*, $Blob*), "java.sql.SQLException"},
	{"setBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBlob, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"setBoolean", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBoolean, void, $String*, bool), "java.sql.SQLException"},
	{"setByte", "(Ljava/lang/String;B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setByte, void, $String*, int8_t), "java.sql.SQLException"},
	{"setBytes", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setBytes, void, $String*, $bytes*), "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setCharacterStream, void, $String*, $Reader*, int32_t), "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setCharacterStream, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"setCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setCharacterStream, void, $String*, $Reader*), "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setClob, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setClob, void, $String*, $Clob*), "java.sql.SQLException"},
	{"setClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setClob, void, $String*, $Reader*), "java.sql.SQLException"},
	{"setDate", "(Ljava/lang/String;Ljava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setDate, void, $String*, $Date*), "java.sql.SQLException"},
	{"setDate", "(Ljava/lang/String;Ljava/sql/Date;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setDate, void, $String*, $Date*, $Calendar*), "java.sql.SQLException"},
	{"setDouble", "(Ljava/lang/String;D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setDouble, void, $String*, double), "java.sql.SQLException"},
	{"setFloat", "(Ljava/lang/String;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setFloat, void, $String*, float), "java.sql.SQLException"},
	{"setInt", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setInt, void, $String*, int32_t), "java.sql.SQLException"},
	{"setLong", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setLong, void, $String*, int64_t), "java.sql.SQLException"},
	{"setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setNCharacterStream, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"setNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setNCharacterStream, void, $String*, $Reader*), "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setNClob, void, $String*, $NClob*), "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setNClob, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"setNClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setNClob, void, $String*, $Reader*), "java.sql.SQLException"},
	{"setNString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setNString, void, $String*, $String*), "java.sql.SQLException"},
	{"setNull", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setNull, void, $String*, int32_t), "java.sql.SQLException"},
	{"setNull", "(Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setNull, void, $String*, int32_t, $String*), "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setObject, void, $String*, Object$*, int32_t, int32_t), "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setObject, void, $String*, Object$*, int32_t), "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setObject, void, $String*, Object$*), "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, $virtualMethod(CallableStatement, setObject, void, $String*, Object$*, $SQLType*, int32_t), "java.sql.SQLException"},
	{"setObject", "(Ljava/lang/String;Ljava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, $virtualMethod(CallableStatement, setObject, void, $String*, Object$*, $SQLType*), "java.sql.SQLException"},
	{"setRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setRowId, void, $String*, $RowId*), "java.sql.SQLException"},
	{"setSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setSQLXML, void, $String*, $SQLXML*), "java.sql.SQLException"},
	{"setShort", "(Ljava/lang/String;S)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setShort, void, $String*, int16_t), "java.sql.SQLException"},
	{"setString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setString, void, $String*, $String*), "java.sql.SQLException"},
	{"setTime", "(Ljava/lang/String;Ljava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setTime, void, $String*, $Time*), "java.sql.SQLException"},
	{"setTime", "(Ljava/lang/String;Ljava/sql/Time;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setTime, void, $String*, $Time*, $Calendar*), "java.sql.SQLException"},
	{"setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setTimestamp, void, $String*, $Timestamp*), "java.sql.SQLException"},
	{"setTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;Ljava/util/Calendar;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setTimestamp, void, $String*, $Timestamp*, $Calendar*), "java.sql.SQLException"},
	{"setURL", "(Ljava/lang/String;Ljava/net/URL;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, setURL, void, $String*, $URL*), "java.sql.SQLException"},
	{"wasNull", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallableStatement, wasNull, bool), "java.sql.SQLException"},
	{}
};

$ClassInfo _CallableStatement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.CallableStatement",
	nullptr,
	"java.sql.PreparedStatement",
	nullptr,
	_CallableStatement_MethodInfo_
};

$Object* allocate$CallableStatement($Class* clazz) {
	return $of($alloc(CallableStatement));
}

void CallableStatement::setObject($String* parameterName, Object$* x, $SQLType* targetSqlType, int32_t scaleOrLength) {
	$throwNew($SQLFeatureNotSupportedException, "setObject not implemented"_s);
}

void CallableStatement::setObject($String* parameterName, Object$* x, $SQLType* targetSqlType) {
	$throwNew($SQLFeatureNotSupportedException, "setObject not implemented"_s);
}

void CallableStatement::registerOutParameter(int32_t parameterIndex, $SQLType* sqlType) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter(int32_t parameterIndex, $SQLType* sqlType, int32_t scale) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter(int32_t parameterIndex, $SQLType* sqlType, $String* typeName) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter($String* parameterName, $SQLType* sqlType) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter($String* parameterName, $SQLType* sqlType, int32_t scale) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

void CallableStatement::registerOutParameter($String* parameterName, $SQLType* sqlType, $String* typeName) {
	$throwNew($SQLFeatureNotSupportedException, "registerOutParameter not implemented"_s);
}

$Class* CallableStatement::load$($String* name, bool initialize) {
	$loadClass(CallableStatement, name, initialize, &_CallableStatement_ClassInfo_, allocate$CallableStatement);
	return class$;
}

$Class* CallableStatement::class$ = nullptr;

	} // sql
} // java