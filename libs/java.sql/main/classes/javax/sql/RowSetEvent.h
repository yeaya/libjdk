#ifndef _javax_sql_RowSetEvent_h_
#define _javax_sql_RowSetEvent_h_
//$ class javax.sql.RowSetEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace javax {
	namespace sql {
		class RowSet;
	}
}

namespace javax {
	namespace sql {

class $export RowSetEvent : public ::java::util::EventObject {
	$class(RowSetEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	RowSetEvent();
	void init$(::javax::sql::RowSet* source);
	static const int64_t serialVersionUID = (int64_t)0xE5F90F5D45C2CA9B;
};

	} // sql
} // javax

#endif // _javax_sql_RowSetEvent_h_