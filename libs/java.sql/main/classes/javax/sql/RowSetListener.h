#ifndef _javax_sql_RowSetListener_h_
#define _javax_sql_RowSetListener_h_
//$ interface javax.sql.RowSetListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace javax {
	namespace sql {
		class RowSetEvent;
	}
}

namespace javax {
	namespace sql {

class $export RowSetListener : public ::java::util::EventListener {
	$interface(RowSetListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void cursorMoved(::javax::sql::RowSetEvent* event) {}
	virtual void rowChanged(::javax::sql::RowSetEvent* event) {}
	virtual void rowSetChanged(::javax::sql::RowSetEvent* event) {}
};

	} // sql
} // javax

#endif // _javax_sql_RowSetListener_h_