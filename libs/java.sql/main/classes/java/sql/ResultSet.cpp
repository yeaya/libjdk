#include <java/sql/ResultSet.h>

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
#include <java/sql/ResultSetMetaData.h>
#include <java/sql/RowId.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLType.h>
#include <java/sql/SQLWarning.h>
#include <java/sql/SQLXML.h>
#include <java/sql/Statement.h>
#include <java/sql/Time.h>
#include <java/sql/Timestamp.h>
#include <java/sql/Wrapper.h>
#include <java/util/Calendar.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef CLOSE_CURSORS_AT_COMMIT
#undef CONCUR_READ_ONLY
#undef CONCUR_UPDATABLE
#undef FETCH_FORWARD
#undef FETCH_REVERSE
#undef FETCH_UNKNOWN
#undef HOLD_CURSORS_OVER_COMMIT
#undef TYPE_FORWARD_ONLY
#undef TYPE_SCROLL_INSENSITIVE
#undef TYPE_SCROLL_SENSITIVE

using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
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
using $ResultSetMetaData = ::java::sql::ResultSetMetaData;
using $RowId = ::java::sql::RowId;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLType = ::java::sql::SQLType;
using $SQLWarning = ::java::sql::SQLWarning;
using $SQLXML = ::java::sql::SQLXML;
using $Statement = ::java::sql::Statement;
using $Time = ::java::sql::Time;
using $Timestamp = ::java::sql::Timestamp;
using $Wrapper = ::java::sql::Wrapper;
using $Calendar = ::java::util::Calendar;
using $Map = ::java::util::Map;

namespace java {
	namespace sql {

$NamedAttribute ResultSet_Attribute_var$0[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _ResultSet_MethodAnnotations_getBigDecimal12[] = {
	{"Ljava/lang/Deprecated;", ResultSet_Attribute_var$0},
	{}
};

$NamedAttribute ResultSet_Attribute_var$1[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _ResultSet_MethodAnnotations_getBigDecimal13[] = {
	{"Ljava/lang/Deprecated;", ResultSet_Attribute_var$1},
	{}
};

$NamedAttribute ResultSet_Attribute_var$2[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _ResultSet_MethodAnnotations_getUnicodeStream83[] = {
	{"Ljava/lang/Deprecated;", ResultSet_Attribute_var$2},
	{}
};

$NamedAttribute ResultSet_Attribute_var$3[] = {
	{"since", 's', "1.2"},
	{}
};

$CompoundAttribute _ResultSet_MethodAnnotations_getUnicodeStream84[] = {
	{"Ljava/lang/Deprecated;", ResultSet_Attribute_var$3},
	{}
};

$FieldInfo _ResultSet_FieldInfo_[] = {
	{"FETCH_FORWARD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, FETCH_FORWARD)},
	{"FETCH_REVERSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, FETCH_REVERSE)},
	{"FETCH_UNKNOWN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, FETCH_UNKNOWN)},
	{"TYPE_FORWARD_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, TYPE_FORWARD_ONLY)},
	{"TYPE_SCROLL_INSENSITIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, TYPE_SCROLL_INSENSITIVE)},
	{"TYPE_SCROLL_SENSITIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, TYPE_SCROLL_SENSITIVE)},
	{"CONCUR_READ_ONLY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, CONCUR_READ_ONLY)},
	{"CONCUR_UPDATABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, CONCUR_UPDATABLE)},
	{"HOLD_CURSORS_OVER_COMMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, HOLD_CURSORS_OVER_COMMIT)},
	{"CLOSE_CURSORS_AT_COMMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ResultSet, CLOSE_CURSORS_AT_COMMIT)},
	{}
};

$MethodInfo _ResultSet_MethodInfo_[] = {
	{"absolute", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, absolute, bool, int32_t), "java.sql.SQLException"},
	{"afterLast", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, afterLast, void), "java.sql.SQLException"},
	{"beforeFirst", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, beforeFirst, void), "java.sql.SQLException"},
	{"cancelRowUpdates", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, cancelRowUpdates, void), "java.sql.SQLException"},
	{"clearWarnings", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, clearWarnings, void), "java.sql.SQLException"},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"deleteRow", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, deleteRow, void), "java.sql.SQLException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"findColumn", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, findColumn, int32_t, $String*), "java.sql.SQLException"},
	{"first", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, first, bool), "java.sql.SQLException"},
	{"getArray", "(I)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getArray, $1Array*, int32_t), "java.sql.SQLException"},
	{"getArray", "(Ljava/lang/String;)Ljava/sql/Array;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getArray, $1Array*, $String*), "java.sql.SQLException"},
	{"getAsciiStream", "(I)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getAsciiStream, $InputStream*, int32_t), "java.sql.SQLException"},
	{"getAsciiStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getAsciiStream, $InputStream*, $String*), "java.sql.SQLException"},
	{"getBigDecimal", "(II)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ResultSet, getBigDecimal, $BigDecimal*, int32_t, int32_t), "java.sql.SQLException", nullptr, _ResultSet_MethodAnnotations_getBigDecimal12},
	{"getBigDecimal", "(Ljava/lang/String;I)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ResultSet, getBigDecimal, $BigDecimal*, $String*, int32_t), "java.sql.SQLException", nullptr, _ResultSet_MethodAnnotations_getBigDecimal13},
	{"getBigDecimal", "(I)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBigDecimal, $BigDecimal*, int32_t), "java.sql.SQLException"},
	{"getBigDecimal", "(Ljava/lang/String;)Ljava/math/BigDecimal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBigDecimal, $BigDecimal*, $String*), "java.sql.SQLException"},
	{"getBinaryStream", "(I)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBinaryStream, $InputStream*, int32_t), "java.sql.SQLException"},
	{"getBinaryStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBinaryStream, $InputStream*, $String*), "java.sql.SQLException"},
	{"getBlob", "(I)Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBlob, $Blob*, int32_t), "java.sql.SQLException"},
	{"getBlob", "(Ljava/lang/String;)Ljava/sql/Blob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBlob, $Blob*, $String*), "java.sql.SQLException"},
	{"getBoolean", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBoolean, bool, int32_t), "java.sql.SQLException"},
	{"getBoolean", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBoolean, bool, $String*), "java.sql.SQLException"},
	{"getByte", "(I)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getByte, int8_t, int32_t), "java.sql.SQLException"},
	{"getByte", "(Ljava/lang/String;)B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getByte, int8_t, $String*), "java.sql.SQLException"},
	{"getBytes", "(I)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBytes, $bytes*, int32_t), "java.sql.SQLException"},
	{"getBytes", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getBytes, $bytes*, $String*), "java.sql.SQLException"},
	{"getCharacterStream", "(I)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getCharacterStream, $Reader*, int32_t), "java.sql.SQLException"},
	{"getCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getCharacterStream, $Reader*, $String*), "java.sql.SQLException"},
	{"getClob", "(I)Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getClob, $Clob*, int32_t), "java.sql.SQLException"},
	{"getClob", "(Ljava/lang/String;)Ljava/sql/Clob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getClob, $Clob*, $String*), "java.sql.SQLException"},
	{"getConcurrency", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getConcurrency, int32_t), "java.sql.SQLException"},
	{"getCursorName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getCursorName, $String*), "java.sql.SQLException"},
	{"getDate", "(I)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getDate, $Date*, int32_t), "java.sql.SQLException"},
	{"getDate", "(Ljava/lang/String;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getDate, $Date*, $String*), "java.sql.SQLException"},
	{"getDate", "(ILjava/util/Calendar;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getDate, $Date*, int32_t, $Calendar*), "java.sql.SQLException"},
	{"getDate", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Date;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getDate, $Date*, $String*, $Calendar*), "java.sql.SQLException"},
	{"getDouble", "(I)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getDouble, double, int32_t), "java.sql.SQLException"},
	{"getDouble", "(Ljava/lang/String;)D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getDouble, double, $String*), "java.sql.SQLException"},
	{"getFetchDirection", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getFetchDirection, int32_t), "java.sql.SQLException"},
	{"getFetchSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getFetchSize, int32_t), "java.sql.SQLException"},
	{"getFloat", "(I)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getFloat, float, int32_t), "java.sql.SQLException"},
	{"getFloat", "(Ljava/lang/String;)F", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getFloat, float, $String*), "java.sql.SQLException"},
	{"getHoldability", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getHoldability, int32_t), "java.sql.SQLException"},
	{"getInt", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getInt, int32_t, int32_t), "java.sql.SQLException"},
	{"getInt", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getInt, int32_t, $String*), "java.sql.SQLException"},
	{"getLong", "(I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getLong, int64_t, int32_t), "java.sql.SQLException"},
	{"getLong", "(Ljava/lang/String;)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getLong, int64_t, $String*), "java.sql.SQLException"},
	{"getMetaData", "()Ljava/sql/ResultSetMetaData;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getMetaData, $ResultSetMetaData*), "java.sql.SQLException"},
	{"getNCharacterStream", "(I)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getNCharacterStream, $Reader*, int32_t), "java.sql.SQLException"},
	{"getNCharacterStream", "(Ljava/lang/String;)Ljava/io/Reader;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getNCharacterStream, $Reader*, $String*), "java.sql.SQLException"},
	{"getNClob", "(I)Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getNClob, $NClob*, int32_t), "java.sql.SQLException"},
	{"getNClob", "(Ljava/lang/String;)Ljava/sql/NClob;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getNClob, $NClob*, $String*), "java.sql.SQLException"},
	{"getNString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getNString, $String*, int32_t), "java.sql.SQLException"},
	{"getNString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getNString, $String*, $String*), "java.sql.SQLException"},
	{"getObject", "(I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getObject, $Object*, int32_t), "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getObject, $Object*, $String*), "java.sql.SQLException"},
	{"getObject", "(ILjava/util/Map;)Ljava/lang/Object;", "(ILjava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getObject, $Object*, int32_t, $Map*), "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/Object;", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<*>;>;)Ljava/lang/Object;", $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getObject, $Object*, $String*, $Map*), "java.sql.SQLException"},
	{"getObject", "(ILjava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(ILjava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getObject, $Object*, int32_t, $Class*), "java.sql.SQLException"},
	{"getObject", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getObject, $Object*, $String*, $Class*), "java.sql.SQLException"},
	{"getRef", "(I)Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getRef, $Ref*, int32_t), "java.sql.SQLException"},
	{"getRef", "(Ljava/lang/String;)Ljava/sql/Ref;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getRef, $Ref*, $String*), "java.sql.SQLException"},
	{"getRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getRow, int32_t), "java.sql.SQLException"},
	{"getRowId", "(I)Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getRowId, $RowId*, int32_t), "java.sql.SQLException"},
	{"getRowId", "(Ljava/lang/String;)Ljava/sql/RowId;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getRowId, $RowId*, $String*), "java.sql.SQLException"},
	{"getSQLXML", "(I)Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getSQLXML, $SQLXML*, int32_t), "java.sql.SQLException"},
	{"getSQLXML", "(Ljava/lang/String;)Ljava/sql/SQLXML;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getSQLXML, $SQLXML*, $String*), "java.sql.SQLException"},
	{"getShort", "(I)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getShort, int16_t, int32_t), "java.sql.SQLException"},
	{"getShort", "(Ljava/lang/String;)S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getShort, int16_t, $String*), "java.sql.SQLException"},
	{"getStatement", "()Ljava/sql/Statement;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getStatement, $Statement*), "java.sql.SQLException"},
	{"getString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getString, $String*, int32_t), "java.sql.SQLException"},
	{"getString", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getString, $String*, $String*), "java.sql.SQLException"},
	{"getTime", "(I)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getTime, $Time*, int32_t), "java.sql.SQLException"},
	{"getTime", "(Ljava/lang/String;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getTime, $Time*, $String*), "java.sql.SQLException"},
	{"getTime", "(ILjava/util/Calendar;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getTime, $Time*, int32_t, $Calendar*), "java.sql.SQLException"},
	{"getTime", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Time;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getTime, $Time*, $String*, $Calendar*), "java.sql.SQLException"},
	{"getTimestamp", "(I)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getTimestamp, $Timestamp*, int32_t), "java.sql.SQLException"},
	{"getTimestamp", "(Ljava/lang/String;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getTimestamp, $Timestamp*, $String*), "java.sql.SQLException"},
	{"getTimestamp", "(ILjava/util/Calendar;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getTimestamp, $Timestamp*, int32_t, $Calendar*), "java.sql.SQLException"},
	{"getTimestamp", "(Ljava/lang/String;Ljava/util/Calendar;)Ljava/sql/Timestamp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getTimestamp, $Timestamp*, $String*, $Calendar*), "java.sql.SQLException"},
	{"getType", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getType, int32_t), "java.sql.SQLException"},
	{"getURL", "(I)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getURL, $URL*, int32_t), "java.sql.SQLException"},
	{"getURL", "(Ljava/lang/String;)Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getURL, $URL*, $String*), "java.sql.SQLException"},
	{"getUnicodeStream", "(I)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ResultSet, getUnicodeStream, $InputStream*, int32_t), "java.sql.SQLException", nullptr, _ResultSet_MethodAnnotations_getUnicodeStream83},
	{"getUnicodeStream", "(Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ResultSet, getUnicodeStream, $InputStream*, $String*), "java.sql.SQLException", nullptr, _ResultSet_MethodAnnotations_getUnicodeStream84},
	{"getWarnings", "()Ljava/sql/SQLWarning;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, getWarnings, $SQLWarning*), "java.sql.SQLException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"insertRow", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, insertRow, void), "java.sql.SQLException"},
	{"isAfterLast", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, isAfterLast, bool), "java.sql.SQLException"},
	{"isBeforeFirst", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, isBeforeFirst, bool), "java.sql.SQLException"},
	{"isClosed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, isClosed, bool), "java.sql.SQLException"},
	{"isFirst", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, isFirst, bool), "java.sql.SQLException"},
	{"isLast", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, isLast, bool), "java.sql.SQLException"},
	{"last", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, last, bool), "java.sql.SQLException"},
	{"moveToCurrentRow", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, moveToCurrentRow, void), "java.sql.SQLException"},
	{"moveToInsertRow", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, moveToInsertRow, void), "java.sql.SQLException"},
	{"next", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, next, bool), "java.sql.SQLException"},
	{"previous", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, previous, bool), "java.sql.SQLException"},
	{"refreshRow", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, refreshRow, void), "java.sql.SQLException"},
	{"relative", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, relative, bool, int32_t), "java.sql.SQLException"},
	{"rowDeleted", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, rowDeleted, bool), "java.sql.SQLException"},
	{"rowInserted", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, rowInserted, bool), "java.sql.SQLException"},
	{"rowUpdated", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, rowUpdated, bool), "java.sql.SQLException"},
	{"setFetchDirection", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, setFetchDirection, void, int32_t), "java.sql.SQLException"},
	{"setFetchSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, setFetchSize, void, int32_t), "java.sql.SQLException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"updateArray", "(ILjava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateArray, void, int32_t, $1Array*), "java.sql.SQLException"},
	{"updateArray", "(Ljava/lang/String;Ljava/sql/Array;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateArray, void, $String*, $1Array*), "java.sql.SQLException"},
	{"updateAsciiStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateAsciiStream, void, int32_t, $InputStream*, int32_t), "java.sql.SQLException"},
	{"updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateAsciiStream, void, $String*, $InputStream*, int32_t), "java.sql.SQLException"},
	{"updateAsciiStream", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateAsciiStream, void, int32_t, $InputStream*, int64_t), "java.sql.SQLException"},
	{"updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateAsciiStream, void, $String*, $InputStream*, int64_t), "java.sql.SQLException"},
	{"updateAsciiStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateAsciiStream, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"updateAsciiStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateAsciiStream, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"updateBigDecimal", "(ILjava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBigDecimal, void, int32_t, $BigDecimal*), "java.sql.SQLException"},
	{"updateBigDecimal", "(Ljava/lang/String;Ljava/math/BigDecimal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBigDecimal, void, $String*, $BigDecimal*), "java.sql.SQLException"},
	{"updateBinaryStream", "(ILjava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBinaryStream, void, int32_t, $InputStream*, int32_t), "java.sql.SQLException"},
	{"updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBinaryStream, void, $String*, $InputStream*, int32_t), "java.sql.SQLException"},
	{"updateBinaryStream", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBinaryStream, void, int32_t, $InputStream*, int64_t), "java.sql.SQLException"},
	{"updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBinaryStream, void, $String*, $InputStream*, int64_t), "java.sql.SQLException"},
	{"updateBinaryStream", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBinaryStream, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"updateBinaryStream", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBinaryStream, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"updateBlob", "(ILjava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBlob, void, int32_t, $Blob*), "java.sql.SQLException"},
	{"updateBlob", "(Ljava/lang/String;Ljava/sql/Blob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBlob, void, $String*, $Blob*), "java.sql.SQLException"},
	{"updateBlob", "(ILjava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBlob, void, int32_t, $InputStream*, int64_t), "java.sql.SQLException"},
	{"updateBlob", "(Ljava/lang/String;Ljava/io/InputStream;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBlob, void, $String*, $InputStream*, int64_t), "java.sql.SQLException"},
	{"updateBlob", "(ILjava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBlob, void, int32_t, $InputStream*), "java.sql.SQLException"},
	{"updateBlob", "(Ljava/lang/String;Ljava/io/InputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBlob, void, $String*, $InputStream*), "java.sql.SQLException"},
	{"updateBoolean", "(IZ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBoolean, void, int32_t, bool), "java.sql.SQLException"},
	{"updateBoolean", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBoolean, void, $String*, bool), "java.sql.SQLException"},
	{"updateByte", "(IB)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateByte, void, int32_t, int8_t), "java.sql.SQLException"},
	{"updateByte", "(Ljava/lang/String;B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateByte, void, $String*, int8_t), "java.sql.SQLException"},
	{"updateBytes", "(I[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBytes, void, int32_t, $bytes*), "java.sql.SQLException"},
	{"updateBytes", "(Ljava/lang/String;[B)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateBytes, void, $String*, $bytes*), "java.sql.SQLException"},
	{"updateCharacterStream", "(ILjava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateCharacterStream, void, int32_t, $Reader*, int32_t), "java.sql.SQLException"},
	{"updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateCharacterStream, void, $String*, $Reader*, int32_t), "java.sql.SQLException"},
	{"updateCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateCharacterStream, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateCharacterStream, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"updateCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateCharacterStream, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"updateCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateCharacterStream, void, $String*, $Reader*), "java.sql.SQLException"},
	{"updateClob", "(ILjava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateClob, void, int32_t, $Clob*), "java.sql.SQLException"},
	{"updateClob", "(Ljava/lang/String;Ljava/sql/Clob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateClob, void, $String*, $Clob*), "java.sql.SQLException"},
	{"updateClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateClob, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"updateClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateClob, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"updateClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateClob, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"updateClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateClob, void, $String*, $Reader*), "java.sql.SQLException"},
	{"updateDate", "(ILjava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateDate, void, int32_t, $Date*), "java.sql.SQLException"},
	{"updateDate", "(Ljava/lang/String;Ljava/sql/Date;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateDate, void, $String*, $Date*), "java.sql.SQLException"},
	{"updateDouble", "(ID)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateDouble, void, int32_t, double), "java.sql.SQLException"},
	{"updateDouble", "(Ljava/lang/String;D)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateDouble, void, $String*, double), "java.sql.SQLException"},
	{"updateFloat", "(IF)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateFloat, void, int32_t, float), "java.sql.SQLException"},
	{"updateFloat", "(Ljava/lang/String;F)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateFloat, void, $String*, float), "java.sql.SQLException"},
	{"updateInt", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateInt, void, int32_t, int32_t), "java.sql.SQLException"},
	{"updateInt", "(Ljava/lang/String;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateInt, void, $String*, int32_t), "java.sql.SQLException"},
	{"updateLong", "(IJ)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateLong, void, int32_t, int64_t), "java.sql.SQLException"},
	{"updateLong", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateLong, void, $String*, int64_t), "java.sql.SQLException"},
	{"updateNCharacterStream", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNCharacterStream, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"updateNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNCharacterStream, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"updateNCharacterStream", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNCharacterStream, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"updateNCharacterStream", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNCharacterStream, void, $String*, $Reader*), "java.sql.SQLException"},
	{"updateNClob", "(ILjava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNClob, void, int32_t, $NClob*), "java.sql.SQLException"},
	{"updateNClob", "(Ljava/lang/String;Ljava/sql/NClob;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNClob, void, $String*, $NClob*), "java.sql.SQLException"},
	{"updateNClob", "(ILjava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNClob, void, int32_t, $Reader*, int64_t), "java.sql.SQLException"},
	{"updateNClob", "(Ljava/lang/String;Ljava/io/Reader;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNClob, void, $String*, $Reader*, int64_t), "java.sql.SQLException"},
	{"updateNClob", "(ILjava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNClob, void, int32_t, $Reader*), "java.sql.SQLException"},
	{"updateNClob", "(Ljava/lang/String;Ljava/io/Reader;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNClob, void, $String*, $Reader*), "java.sql.SQLException"},
	{"updateNString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNString, void, int32_t, $String*), "java.sql.SQLException"},
	{"updateNString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNString, void, $String*, $String*), "java.sql.SQLException"},
	{"updateNull", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNull, void, int32_t), "java.sql.SQLException"},
	{"updateNull", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateNull, void, $String*), "java.sql.SQLException"},
	{"updateObject", "(ILjava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateObject, void, int32_t, Object$*, int32_t), "java.sql.SQLException"},
	{"updateObject", "(ILjava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateObject, void, int32_t, Object$*), "java.sql.SQLException"},
	{"updateObject", "(Ljava/lang/String;Ljava/lang/Object;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateObject, void, $String*, Object$*, int32_t), "java.sql.SQLException"},
	{"updateObject", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateObject, void, $String*, Object$*), "java.sql.SQLException"},
	{"updateObject", "(ILjava/lang/Object;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, $virtualMethod(ResultSet, updateObject, void, int32_t, Object$*, $SQLType*, int32_t), "java.sql.SQLException"},
	{"updateObject", "(Ljava/lang/String;Ljava/lang/Object;Ljava/sql/SQLType;I)V", nullptr, $PUBLIC, $virtualMethod(ResultSet, updateObject, void, $String*, Object$*, $SQLType*, int32_t), "java.sql.SQLException"},
	{"updateObject", "(ILjava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, $virtualMethod(ResultSet, updateObject, void, int32_t, Object$*, $SQLType*), "java.sql.SQLException"},
	{"updateObject", "(Ljava/lang/String;Ljava/lang/Object;Ljava/sql/SQLType;)V", nullptr, $PUBLIC, $virtualMethod(ResultSet, updateObject, void, $String*, Object$*, $SQLType*), "java.sql.SQLException"},
	{"updateRef", "(ILjava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateRef, void, int32_t, $Ref*), "java.sql.SQLException"},
	{"updateRef", "(Ljava/lang/String;Ljava/sql/Ref;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateRef, void, $String*, $Ref*), "java.sql.SQLException"},
	{"updateRow", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateRow, void), "java.sql.SQLException"},
	{"updateRowId", "(ILjava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateRowId, void, int32_t, $RowId*), "java.sql.SQLException"},
	{"updateRowId", "(Ljava/lang/String;Ljava/sql/RowId;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateRowId, void, $String*, $RowId*), "java.sql.SQLException"},
	{"updateSQLXML", "(ILjava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateSQLXML, void, int32_t, $SQLXML*), "java.sql.SQLException"},
	{"updateSQLXML", "(Ljava/lang/String;Ljava/sql/SQLXML;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateSQLXML, void, $String*, $SQLXML*), "java.sql.SQLException"},
	{"updateShort", "(IS)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateShort, void, int32_t, int16_t), "java.sql.SQLException"},
	{"updateShort", "(Ljava/lang/String;S)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateShort, void, $String*, int16_t), "java.sql.SQLException"},
	{"updateString", "(ILjava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateString, void, int32_t, $String*), "java.sql.SQLException"},
	{"updateString", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateString, void, $String*, $String*), "java.sql.SQLException"},
	{"updateTime", "(ILjava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateTime, void, int32_t, $Time*), "java.sql.SQLException"},
	{"updateTime", "(Ljava/lang/String;Ljava/sql/Time;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateTime, void, $String*, $Time*), "java.sql.SQLException"},
	{"updateTimestamp", "(ILjava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateTimestamp, void, int32_t, $Timestamp*), "java.sql.SQLException"},
	{"updateTimestamp", "(Ljava/lang/String;Ljava/sql/Timestamp;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, updateTimestamp, void, $String*, $Timestamp*), "java.sql.SQLException"},
	{"wasNull", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ResultSet, wasNull, bool), "java.sql.SQLException"},
	{}
};

$ClassInfo _ResultSet_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.ResultSet",
	nullptr,
	"java.sql.Wrapper,java.lang.AutoCloseable",
	_ResultSet_FieldInfo_,
	_ResultSet_MethodInfo_
};

$Object* allocate$ResultSet($Class* clazz) {
	return $of($alloc(ResultSet));
}

int32_t ResultSet::hashCode() {
	 return this->$Wrapper::hashCode();
}

bool ResultSet::equals(Object$* arg0) {
	 return this->$Wrapper::equals(arg0);
}

$Object* ResultSet::clone() {
	 return this->$Wrapper::clone();
}

$String* ResultSet::toString() {
	 return this->$Wrapper::toString();
}

void ResultSet::finalize() {
	this->$Wrapper::finalize();
}

void ResultSet::updateObject(int32_t columnIndex, Object$* x, $SQLType* targetSqlType, int32_t scaleOrLength) {
	$throwNew($SQLFeatureNotSupportedException, "updateObject not implemented"_s);
}

void ResultSet::updateObject($String* columnLabel, Object$* x, $SQLType* targetSqlType, int32_t scaleOrLength) {
	$throwNew($SQLFeatureNotSupportedException, "updateObject not implemented"_s);
}

void ResultSet::updateObject(int32_t columnIndex, Object$* x, $SQLType* targetSqlType) {
	$throwNew($SQLFeatureNotSupportedException, "updateObject not implemented"_s);
}

void ResultSet::updateObject($String* columnLabel, Object$* x, $SQLType* targetSqlType) {
	$throwNew($SQLFeatureNotSupportedException, "updateObject not implemented"_s);
}

$Class* ResultSet::load$($String* name, bool initialize) {
	$loadClass(ResultSet, name, initialize, &_ResultSet_ClassInfo_, allocate$ResultSet);
	return class$;
}

$Class* ResultSet::class$ = nullptr;

	} // sql
} // java