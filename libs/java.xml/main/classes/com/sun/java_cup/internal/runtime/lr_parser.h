#ifndef _com_sun_java_cup_internal_runtime_lr_parser_h_
#define _com_sun_java_cup_internal_runtime_lr_parser_h_
//$ class com.sun.java_cup.internal.runtime.lr_parser
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {
					class Scanner;
					class Symbol;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Stack;
	}
}

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {

class lr_parser : public ::java::lang::Object {
	$class(lr_parser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	lr_parser();
	void init$();
	void init$(::com::sun::java_cup::internal::runtime::Scanner* s);
	virtual int32_t EOF_sym() {return 0;}
	virtual $Array<int16_t, 2>* action_table() {return nullptr;}
	virtual bool advance_lookahead();
	virtual ::com::sun::java_cup::internal::runtime::Symbol* cur_err_token();
	virtual void debug_message($String* mess);
	virtual ::com::sun::java_cup::internal::runtime::Symbol* debug_parse();
	virtual void debug_reduce(int32_t prod_num, int32_t nt_num, int32_t rhs_size);
	virtual void debug_shift(::com::sun::java_cup::internal::runtime::Symbol* shift_tkn);
	virtual void debug_stack();
	virtual ::com::sun::java_cup::internal::runtime::Symbol* do_action(int32_t act_num, ::com::sun::java_cup::internal::runtime::lr_parser* parser, ::java::util::Stack* stack, int32_t top) {return nullptr;}
	virtual void done_parsing();
	virtual void dump_stack();
	virtual bool error_recovery(bool debug);
	virtual int32_t error_sym() {return 0;}
	virtual int32_t error_sync_size();
	virtual bool find_recovery_config(bool debug);
	virtual ::com::sun::java_cup::internal::runtime::Scanner* getScanner();
	int16_t get_action(int32_t state, int32_t sym);
	int16_t get_reduce(int32_t state, int32_t sym);
	virtual void init_actions() {}
	virtual ::com::sun::java_cup::internal::runtime::Symbol* parse();
	virtual void parse_lookahead(bool debug);
	virtual $Array<int16_t, 2>* production_table() {return nullptr;}
	virtual void read_lookahead();
	virtual $Array<int16_t, 2>* reduce_table() {return nullptr;}
	virtual void report_error($String* message, Object$* info);
	virtual void report_fatal_error($String* message, Object$* info);
	virtual void restart_lookahead();
	virtual ::com::sun::java_cup::internal::runtime::Symbol* scan();
	virtual void setScanner(::com::sun::java_cup::internal::runtime::Scanner* s);
	virtual bool shift_under_error();
	virtual int32_t start_production() {return 0;}
	virtual int32_t start_state() {return 0;}
	virtual void syntax_error(::com::sun::java_cup::internal::runtime::Symbol* cur_token);
	virtual bool try_parse_ahead(bool debug);
	static $Array<int16_t, 2>* unpackFromStrings($StringArray* sa);
	virtual void unrecovered_syntax_error(::com::sun::java_cup::internal::runtime::Symbol* cur_token);
	virtual void user_init();
	static const int32_t _error_sync_size = 3;
	bool _done_parsing = false;
	int32_t tos = 0;
	::com::sun::java_cup::internal::runtime::Symbol* cur_token = nullptr;
	::java::util::Stack* stack = nullptr;
	$Array<int16_t, 2>* production_tab = nullptr;
	$Array<int16_t, 2>* action_tab = nullptr;
	$Array<int16_t, 2>* reduce_tab = nullptr;
	::com::sun::java_cup::internal::runtime::Scanner* _scanner = nullptr;
	$Array<::com::sun::java_cup::internal::runtime::Symbol>* lookahead = nullptr;
	int32_t lookahead_pos = 0;
};

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com

#endif // _com_sun_java_cup_internal_runtime_lr_parser_h_