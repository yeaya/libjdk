#ifndef _javax_sql_StatementEventListener_h_
#define _javax_sql_StatementEventListener_h_
//$ interface javax.sql.StatementEventListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace sql {
		class StatementEvent;
	}
}

namespace javax {
	namespace sql {

class $export StatementEventListener : public ::java::util::EventListener {
	$interface(StatementEventListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void statementClosed(::javax::sql::StatementEvent* event) {}
	virtual void statementErrorOccurred(::javax::sql::StatementEvent* event) {}
};

	} // sql
} // javax

#endif // _javax_sql_StatementEventListener_h_