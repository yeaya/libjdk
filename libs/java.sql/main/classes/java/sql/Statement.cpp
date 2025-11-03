#include <java/sql/Statement.h>

#include <java/lang/CharSequence.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/sql/Connection.h>
#include <java/sql/ResultSet.h>
#include <java/sql/SQLException.h>
#include <java/sql/SQLFeatureNotSupportedException.h>
#include <java/sql/SQLWarning.h>
#include <java/sql/Wrapper.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef CLOSE_ALL_RESULTS
#undef CLOSE_CURRENT_RESULT
#undef EXECUTE_FAILED
#undef KEEP_CURRENT_RESULT
#undef NO_GENERATED_KEYS
#undef RETURN_GENERATED_KEYS
#undef SUCCESS_NO_INFO

using $AutoCloseable = ::java::lang::AutoCloseable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Connection = ::java::sql::Connection;
using $ResultSet = ::java::sql::ResultSet;
using $SQLException = ::java::sql::SQLException;
using $SQLFeatureNotSupportedException = ::java::sql::SQLFeatureNotSupportedException;
using $SQLWarning = ::java::sql::SQLWarning;
using $Wrapper = ::java::sql::Wrapper;
using $Matcher = ::java::util::regex::Matcher;
using $Pattern = ::java::util::regex::Pattern;

namespace java {
	namespace sql {

$FieldInfo _Statement_FieldInfo_[] = {
	{"CLOSE_CURRENT_RESULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Statement, CLOSE_CURRENT_RESULT)},
	{"KEEP_CURRENT_RESULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Statement, KEEP_CURRENT_RESULT)},
	{"CLOSE_ALL_RESULTS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Statement, CLOSE_ALL_RESULTS)},
	{"SUCCESS_NO_INFO", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Statement, SUCCESS_NO_INFO)},
	{"EXECUTE_FAILED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Statement, EXECUTE_FAILED)},
	{"RETURN_GENERATED_KEYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Statement, RETURN_GENERATED_KEYS)},
	{"NO_GENERATED_KEYS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Statement, NO_GENERATED_KEYS)},
	{}
};

$MethodInfo _Statement_MethodInfo_[] = {
	{"addBatch", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"cancel", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"clearBatch", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"clearWarnings", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"closeOnCompletion", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"enquoteIdentifier", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"enquoteLiteral", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"enquoteNCharLiteral", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"execute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"execute", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"execute", "(Ljava/lang/String;[I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"execute", "(Ljava/lang/String;[Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"executeBatch", "()[I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"executeLargeBatch", "()[J", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"executeLargeUpdate", "(Ljava/lang/String;)J", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"executeLargeUpdate", "(Ljava/lang/String;I)J", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"executeLargeUpdate", "(Ljava/lang/String;[I)J", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"executeLargeUpdate", "(Ljava/lang/String;[Ljava/lang/String;)J", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"executeQuery", "(Ljava/lang/String;)Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"executeUpdate", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"executeUpdate", "(Ljava/lang/String;I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"executeUpdate", "(Ljava/lang/String;[I)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"executeUpdate", "(Ljava/lang/String;[Ljava/lang/String;)I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getConnection", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getFetchDirection", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getFetchSize", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getGeneratedKeys", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getLargeMaxRows", "()J", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"getLargeUpdateCount", "()J", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"getMaxFieldSize", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getMaxRows", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getMoreResults", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getMoreResults", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getQueryTimeout", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getResultSet", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getResultSetConcurrency", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getResultSetHoldability", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getResultSetType", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getUpdateCount", "()I", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"getWarnings", "()Ljava/sql/SQLWarning;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isCloseOnCompletion", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isClosed", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isPoolable", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"isSimpleIdentifier", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setCursorName", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setEscapeProcessing", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setFetchDirection", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setFetchSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setLargeMaxRows", "(J)V", nullptr, $PUBLIC, nullptr, "java.sql.SQLException"},
	{"setMaxFieldSize", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setMaxRows", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setPoolable", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"setQueryTimeout", "(I)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.sql.SQLException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Statement_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.Statement",
	nullptr,
	"java.sql.Wrapper,java.lang.AutoCloseable",
	_Statement_FieldInfo_,
	_Statement_MethodInfo_
};

$Object* allocate$Statement($Class* clazz) {
	return $of($alloc(Statement));
}

int32_t Statement::hashCode() {
	 return this->$Wrapper::hashCode();
}

bool Statement::equals(Object$* arg0) {
	 return this->$Wrapper::equals(arg0);
}

$Object* Statement::clone() {
	 return this->$Wrapper::clone();
}

$String* Statement::toString() {
	 return this->$Wrapper::toString();
}

void Statement::finalize() {
	this->$Wrapper::finalize();
}

int64_t Statement::getLargeUpdateCount() {
	$throwNew($UnsupportedOperationException, "getLargeUpdateCount not implemented"_s);
	$shouldNotReachHere();
}

void Statement::setLargeMaxRows(int64_t max) {
	$throwNew($UnsupportedOperationException, "setLargeMaxRows not implemented"_s);
}

int64_t Statement::getLargeMaxRows() {
	return 0;
}

$longs* Statement::executeLargeBatch() {
	$throwNew($UnsupportedOperationException, "executeLargeBatch not implemented"_s);
	$shouldNotReachHere();
}

int64_t Statement::executeLargeUpdate($String* sql) {
	$throwNew($UnsupportedOperationException, "executeLargeUpdate not implemented"_s);
	$shouldNotReachHere();
}

int64_t Statement::executeLargeUpdate($String* sql, int32_t autoGeneratedKeys) {
	$throwNew($SQLFeatureNotSupportedException, "executeLargeUpdate not implemented"_s);
	$shouldNotReachHere();
}

int64_t Statement::executeLargeUpdate($String* sql, $ints* columnIndexes) {
	$throwNew($SQLFeatureNotSupportedException, "executeLargeUpdate not implemented"_s);
	$shouldNotReachHere();
}

int64_t Statement::executeLargeUpdate($String* sql, $StringArray* columnNames) {
	$throwNew($SQLFeatureNotSupportedException, "executeLargeUpdate not implemented"_s);
	$shouldNotReachHere();
}

$String* Statement::enquoteLiteral($String* val) {
	return $str({"\'"_s, $($nc(val)->replace(static_cast<$CharSequence*>("\'"_s), static_cast<$CharSequence*>("\'\'"_s))), "\'"_s});
}

$String* Statement::enquoteIdentifier($String* identifier$renamed, bool alwaysQuote) {
	$useLocalCurrentObjectStackCache();
	$var($String, identifier, identifier$renamed);
	int32_t len = $nc(identifier)->length();
	if (len < 1 || len > 128) {
		$throwNew($SQLException, "Invalid name"_s);
	}
	if ($nc($($nc($($Pattern::compile("[\\p{Alpha}][\\p{Alnum}_]*"_s)))->matcher(identifier)))->matches()) {
		return alwaysQuote ? $str({"\""_s, identifier, "\""_s}) : identifier;
	}
	if (identifier->matches("^\".+\"$"_s)) {
		$assign(identifier, identifier->substring(1, len - 1));
	}
	if ($nc($($nc($($Pattern::compile($cstr({'[', '^', '\0', '\"', ']', '+'}))))->matcher(identifier)))->matches()) {
		return $str({"\""_s, identifier, "\""_s});
	} else {
		$throwNew($SQLException, "Invalid name"_s);
	}
}

bool Statement::isSimpleIdentifier($String* identifier) {
	$useLocalCurrentObjectStackCache();
	int32_t len = $nc(identifier)->length();
	return len >= 1 && len <= 128 && $nc($($nc($($Pattern::compile("[\\p{Alpha}][\\p{Alnum}_]*"_s)))->matcher(identifier)))->matches();
}

$String* Statement::enquoteNCharLiteral($String* val) {
	return $str({"N\'"_s, $($nc(val)->replace(static_cast<$CharSequence*>("\'"_s), static_cast<$CharSequence*>("\'\'"_s))), "\'"_s});
}

$Class* Statement::load$($String* name, bool initialize) {
	$loadClass(Statement, name, initialize, &_Statement_ClassInfo_, allocate$Statement);
	return class$;
}

$Class* Statement::class$ = nullptr;

	} // sql
} // java