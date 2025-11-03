#ifndef _java_sql_Types_h_
#define _java_sql_Types_h_
//$ class java.sql.Types
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ARRAY")
#undef ARRAY
#pragma push_macro("BIGINT")
#undef BIGINT
#pragma push_macro("BINARY")
#undef BINARY
#pragma push_macro("BIT")
#undef BIT
#pragma push_macro("BLOB")
#undef BLOB
#pragma push_macro("BOOLEAN")
#undef BOOLEAN
#pragma push_macro("CHAR")
#undef CHAR
#pragma push_macro("CLOB")
#undef CLOB
#pragma push_macro("DATALINK")
#undef DATALINK
#pragma push_macro("DATE")
#undef DATE
#pragma push_macro("DECIMAL")
#undef DECIMAL
#pragma push_macro("DISTINCT")
#undef DISTINCT
#pragma push_macro("DOUBLE")
#undef DOUBLE
#pragma push_macro("FLOAT")
#undef FLOAT
#pragma push_macro("INTEGER")
#undef INTEGER
#pragma push_macro("JAVA_OBJECT")
#undef JAVA_OBJECT
#pragma push_macro("LONGNVARCHAR")
#undef LONGNVARCHAR
#pragma push_macro("LONGVARBINARY")
#undef LONGVARBINARY
#pragma push_macro("LONGVARCHAR")
#undef LONGVARCHAR
#pragma push_macro("NCHAR")
#undef NCHAR
#pragma push_macro("NCLOB")
#undef NCLOB
#pragma push_macro("NULL")
#undef NULL
#pragma push_macro("NUMERIC")
#undef NUMERIC
#pragma push_macro("NVARCHAR")
#undef NVARCHAR
#pragma push_macro("OTHER")
#undef OTHER
#pragma push_macro("REAL")
#undef REAL
#pragma push_macro("REF")
#undef REF
#pragma push_macro("REF_CURSOR")
#undef REF_CURSOR
#pragma push_macro("ROWID")
#undef ROWID
#pragma push_macro("SMALLINT")
#undef SMALLINT
#pragma push_macro("SQLXML")
#undef SQLXML
#pragma push_macro("STRUCT")
#undef STRUCT
#pragma push_macro("TIME")
#undef TIME
#pragma push_macro("TIMESTAMP")
#undef TIMESTAMP
#pragma push_macro("TIMESTAMP_WITH_TIMEZONE")
#undef TIMESTAMP_WITH_TIMEZONE
#pragma push_macro("TIME_WITH_TIMEZONE")
#undef TIME_WITH_TIMEZONE
#pragma push_macro("TINYINT")
#undef TINYINT
#pragma push_macro("VARBINARY")
#undef VARBINARY
#pragma push_macro("VARCHAR")
#undef VARCHAR

namespace java {
	namespace sql {

class $export Types : public ::java::lang::Object {
	$class(Types, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Types();
	void init$();
	static const int32_t BIT = (-7);
	static const int32_t TINYINT = (-6);
	static const int32_t SMALLINT = 5;
	static const int32_t INTEGER = 4;
	static const int32_t BIGINT = (-5);
	static const int32_t FLOAT = 6;
	static const int32_t REAL = 7;
	static const int32_t DOUBLE = 8;
	static const int32_t NUMERIC = 2;
	static const int32_t DECIMAL = 3;
	static const int32_t CHAR = 1;
	static const int32_t VARCHAR = 12;
	static const int32_t LONGVARCHAR = (-1);
	static const int32_t DATE = 91;
	static const int32_t TIME = 92;
	static const int32_t TIMESTAMP = 93;
	static const int32_t BINARY = (-2);
	static const int32_t VARBINARY = (-3);
	static const int32_t LONGVARBINARY = (-4);
	static const int32_t NULL = 0;
	static const int32_t OTHER = 1111;
	static const int32_t JAVA_OBJECT = 2000;
	static const int32_t DISTINCT = 2001;
	static const int32_t STRUCT = 2002;
	static const int32_t ARRAY = 2003;
	static const int32_t BLOB = 2004;
	static const int32_t CLOB = 2005;
	static const int32_t REF = 2006;
	static const int32_t DATALINK = 70;
	static const int32_t BOOLEAN = 16;
	static const int32_t ROWID = (-8);
	static const int32_t NCHAR = (-15);
	static const int32_t NVARCHAR = (-9);
	static const int32_t LONGNVARCHAR = (-16);
	static const int32_t NCLOB = 2011;
	static const int32_t SQLXML = 2009;
	static const int32_t REF_CURSOR = 2012;
	static const int32_t TIME_WITH_TIMEZONE = 2013;
	static const int32_t TIMESTAMP_WITH_TIMEZONE = 2014;
};

	} // sql
} // java

#pragma pop_macro("ARRAY")
#pragma pop_macro("BIGINT")
#pragma pop_macro("BINARY")
#pragma pop_macro("BIT")
#pragma pop_macro("BLOB")
#pragma pop_macro("BOOLEAN")
#pragma pop_macro("CHAR")
#pragma pop_macro("CLOB")
#pragma pop_macro("DATALINK")
#pragma pop_macro("DATE")
#pragma pop_macro("DECIMAL")
#pragma pop_macro("DISTINCT")
#pragma pop_macro("DOUBLE")
#pragma pop_macro("FLOAT")
#pragma pop_macro("INTEGER")
#pragma pop_macro("JAVA_OBJECT")
#pragma pop_macro("LONGNVARCHAR")
#pragma pop_macro("LONGVARBINARY")
#pragma pop_macro("LONGVARCHAR")
#pragma pop_macro("NCHAR")
#pragma pop_macro("NCLOB")
#pragma pop_macro("NULL")
#pragma pop_macro("NUMERIC")
#pragma pop_macro("NVARCHAR")
#pragma pop_macro("OTHER")
#pragma pop_macro("REAL")
#pragma pop_macro("REF")
#pragma pop_macro("REF_CURSOR")
#pragma pop_macro("ROWID")
#pragma pop_macro("SMALLINT")
#pragma pop_macro("SQLXML")
#pragma pop_macro("STRUCT")
#pragma pop_macro("TIME")
#pragma pop_macro("TIMESTAMP")
#pragma pop_macro("TIMESTAMP_WITH_TIMEZONE")
#pragma pop_macro("TIME_WITH_TIMEZONE")
#pragma pop_macro("TINYINT")
#pragma pop_macro("VARBINARY")
#pragma pop_macro("VARCHAR")

#endif // _java_sql_Types_h_