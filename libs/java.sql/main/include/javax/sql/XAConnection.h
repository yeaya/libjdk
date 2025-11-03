#ifndef _javax_sql_XAConnection_h_
#define _javax_sql_XAConnection_h_
//$ interface javax.sql.XAConnection
//$ extends javax.sql.PooledConnection

#include <javax/sql/PooledConnection.h>

namespace javax {
	namespace transaction {
		namespace xa {
			class XAResource;
		}
	}
}

namespace javax {
	namespace sql {

class $import XAConnection : public ::javax::sql::PooledConnection {
	$interface(XAConnection, $NO_CLASS_INIT, ::javax::sql::PooledConnection)
public:
	virtual ::javax::transaction::xa::XAResource* getXAResource() {return nullptr;}
};

	} // sql
} // javax

#endif // _javax_sql_XAConnection_h_