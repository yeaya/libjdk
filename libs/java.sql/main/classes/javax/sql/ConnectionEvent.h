#ifndef _javax_sql_ConnectionEvent_h_
#define _javax_sql_ConnectionEvent_h_
//$ class javax.sql.ConnectionEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace sql {
		class SQLException;
	}
}
namespace javax {
	namespace sql {
		class PooledConnection;
	}
}

namespace javax {
	namespace sql {

class $export ConnectionEvent : public ::java::util::EventObject {
	$class(ConnectionEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	ConnectionEvent();
	void init$(::javax::sql::PooledConnection* con);
	void init$(::javax::sql::PooledConnection* con, ::java::sql::SQLException* ex);
	virtual ::java::sql::SQLException* getSQLException();
	::java::sql::SQLException* ex = nullptr;
	static const int64_t serialVersionUID = (int64_t)0xBCC96F364A957C4E;
};

	} // sql
} // javax

#endif // _javax_sql_ConnectionEvent_h_