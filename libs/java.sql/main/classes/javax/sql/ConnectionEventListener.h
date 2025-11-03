#ifndef _javax_sql_ConnectionEventListener_h_
#define _javax_sql_ConnectionEventListener_h_
//$ interface javax.sql.ConnectionEventListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace sql {
		class ConnectionEvent;
	}
}

namespace javax {
	namespace sql {

class $export ConnectionEventListener : public ::java::util::EventListener {
	$interface(ConnectionEventListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void connectionClosed(::javax::sql::ConnectionEvent* event) {}
	virtual void connectionErrorOccurred(::javax::sql::ConnectionEvent* event) {}
};

	} // sql
} // javax

#endif // _javax_sql_ConnectionEventListener_h_