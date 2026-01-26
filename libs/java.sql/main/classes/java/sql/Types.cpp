#include <java/sql/Types.h>

#include <jcpp.h>

#undef ARRAY
#undef BIGINT
#undef BINARY
#undef BIT
#undef BLOB
#undef BOOLEAN
#undef CHAR
#undef CLOB
#undef DATALINK
#undef DATE
#undef DECIMAL
#undef DISTINCT
#undef DOUBLE
#undef FLOAT
#undef INTEGER
#undef JAVA_OBJECT
#undef LONGNVARCHAR
#undef LONGVARBINARY
#undef LONGVARCHAR
#undef NCHAR
#undef NCLOB
#undef NULL
#undef NUMERIC
#undef NVARCHAR
#undef OTHER
#undef REAL
#undef REF
#undef REF_CURSOR
#undef ROWID
#undef SMALLINT
#undef SQLXML
#undef STRUCT
#undef TIME
#undef TIMESTAMP
#undef TIMESTAMP_WITH_TIMEZONE
#undef TIME_WITH_TIMEZONE
#undef TINYINT
#undef VARBINARY
#undef VARCHAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$FieldInfo _Types_FieldInfo_[] = {
	{"BIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, BIT)},
	{"TINYINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, TINYINT)},
	{"SMALLINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, SMALLINT)},
	{"INTEGER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, INTEGER)},
	{"BIGINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, BIGINT)},
	{"FLOAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, FLOAT)},
	{"REAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, REAL)},
	{"DOUBLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, DOUBLE)},
	{"NUMERIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, NUMERIC)},
	{"DECIMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, DECIMAL)},
	{"CHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, CHAR)},
	{"VARCHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, VARCHAR)},
	{"LONGVARCHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, LONGVARCHAR)},
	{"DATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, DATE)},
	{"TIME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, TIME)},
	{"TIMESTAMP", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, TIMESTAMP)},
	{"BINARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, BINARY)},
	{"VARBINARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, VARBINARY)},
	{"LONGVARBINARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, LONGVARBINARY)},
	{"NULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, NULL)},
	{"OTHER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, OTHER)},
	{"JAVA_OBJECT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, JAVA_OBJECT)},
	{"DISTINCT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, DISTINCT)},
	{"STRUCT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, STRUCT)},
	{"ARRAY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, ARRAY)},
	{"BLOB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, BLOB)},
	{"CLOB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, CLOB)},
	{"REF", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, REF)},
	{"DATALINK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, DATALINK)},
	{"BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, BOOLEAN)},
	{"ROWID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, ROWID)},
	{"NCHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, NCHAR)},
	{"NVARCHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, NVARCHAR)},
	{"LONGNVARCHAR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, LONGNVARCHAR)},
	{"NCLOB", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, NCLOB)},
	{"SQLXML", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, SQLXML)},
	{"REF_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, REF_CURSOR)},
	{"TIME_WITH_TIMEZONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, TIME_WITH_TIMEZONE)},
	{"TIMESTAMP_WITH_TIMEZONE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Types, TIMESTAMP_WITH_TIMEZONE)},
	{}
};

$MethodInfo _Types_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Types, init$, void)},
	{}
};

$ClassInfo _Types_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.sql.Types",
	"java.lang.Object",
	nullptr,
	_Types_FieldInfo_,
	_Types_MethodInfo_
};

$Object* allocate$Types($Class* clazz) {
	return $of($alloc(Types));
}

void Types::init$() {
}

Types::Types() {
}

$Class* Types::load$($String* name, bool initialize) {
	$loadClass(Types, name, initialize, &_Types_ClassInfo_, allocate$Types);
	return class$;
}

$Class* Types::class$ = nullptr;

	} // sql
} // java