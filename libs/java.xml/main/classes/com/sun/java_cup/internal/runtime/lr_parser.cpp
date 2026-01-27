#include <com/sun/java_cup/internal/runtime/lr_parser.h>

#include <com/sun/java_cup/internal/runtime/Scanner.h>
#include <com/sun/java_cup/internal/runtime/Symbol.h>
#include <com/sun/java_cup/internal/runtime/virtual_parse_stack.h>
#include <java/lang/Error.h>
#include <java/util/Stack.h>
#include <jcpp.h>

using $SymbolArray = $Array<::com::sun::java_cup::internal::runtime::Symbol>;
using $shortArray2 = $Array<int16_t, 2>;
using $Scanner = ::com::sun::java_cup::internal::runtime::Scanner;
using $Symbol = ::com::sun::java_cup::internal::runtime::Symbol;
using $virtual_parse_stack = ::com::sun::java_cup::internal::runtime::virtual_parse_stack;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stack = ::java::util::Stack;

namespace com {
	namespace sun {
		namespace java_cup {
			namespace internal {
				namespace runtime {

$FieldInfo _lr_parser_FieldInfo_[] = {
	{"_error_sync_size", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(lr_parser, _error_sync_size)},
	{"_done_parsing", "Z", nullptr, $PROTECTED, $field(lr_parser, _done_parsing)},
	{"tos", "I", nullptr, $PROTECTED, $field(lr_parser, tos)},
	{"cur_token", "Lcom/sun/java_cup/internal/runtime/Symbol;", nullptr, $PROTECTED, $field(lr_parser, cur_token)},
	{"stack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/java_cup/internal/runtime/Symbol;>;", $PROTECTED, $field(lr_parser, stack)},
	{"production_tab", "[[S", nullptr, $PROTECTED, $field(lr_parser, production_tab)},
	{"action_tab", "[[S", nullptr, $PROTECTED, $field(lr_parser, action_tab)},
	{"reduce_tab", "[[S", nullptr, $PROTECTED, $field(lr_parser, reduce_tab)},
	{"_scanner", "Lcom/sun/java_cup/internal/runtime/Scanner;", nullptr, $PRIVATE, $field(lr_parser, _scanner)},
	{"lookahead", "[Lcom/sun/java_cup/internal/runtime/Symbol;", nullptr, $PROTECTED, $field(lr_parser, lookahead)},
	{"lookahead_pos", "I", nullptr, $PROTECTED, $field(lr_parser, lookahead_pos)},
	{}
};

$MethodInfo _lr_parser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(lr_parser, init$, void)},
	{"<init>", "(Lcom/sun/java_cup/internal/runtime/Scanner;)V", nullptr, $PUBLIC, $method(lr_parser, init$, void, $Scanner*)},
	{"EOF_sym", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(lr_parser, EOF_sym, int32_t)},
	{"action_table", "()[[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(lr_parser, action_table, $shortArray2*)},
	{"advance_lookahead", "()Z", nullptr, $PROTECTED, $virtualMethod(lr_parser, advance_lookahead, bool)},
	{"cur_err_token", "()Lcom/sun/java_cup/internal/runtime/Symbol;", nullptr, $PROTECTED, $virtualMethod(lr_parser, cur_err_token, $Symbol*)},
	{"debug_message", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(lr_parser, debug_message, void, $String*)},
	{"debug_parse", "()Lcom/sun/java_cup/internal/runtime/Symbol;", nullptr, $PUBLIC, $virtualMethod(lr_parser, debug_parse, $Symbol*), "java.lang.Exception"},
	{"debug_reduce", "(III)V", nullptr, $PUBLIC, $virtualMethod(lr_parser, debug_reduce, void, int32_t, int32_t, int32_t)},
	{"debug_shift", "(Lcom/sun/java_cup/internal/runtime/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(lr_parser, debug_shift, void, $Symbol*)},
	{"debug_stack", "()V", nullptr, $PUBLIC, $virtualMethod(lr_parser, debug_stack, void)},
	{"do_action", "(ILcom/sun/java_cup/internal/runtime/lr_parser;Ljava/util/Stack;I)Lcom/sun/java_cup/internal/runtime/Symbol;", "(ILcom/sun/java_cup/internal/runtime/lr_parser;Ljava/util/Stack<Lcom/sun/java_cup/internal/runtime/Symbol;>;I)Lcom/sun/java_cup/internal/runtime/Symbol;", $PUBLIC | $ABSTRACT, $virtualMethod(lr_parser, do_action, $Symbol*, int32_t, lr_parser*, $Stack*, int32_t), "java.lang.Exception"},
	{"done_parsing", "()V", nullptr, $PUBLIC, $virtualMethod(lr_parser, done_parsing, void)},
	{"dump_stack", "()V", nullptr, $PUBLIC, $virtualMethod(lr_parser, dump_stack, void)},
	{"error_recovery", "(Z)Z", nullptr, $PROTECTED, $virtualMethod(lr_parser, error_recovery, bool, bool), "java.lang.Exception"},
	{"error_sym", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(lr_parser, error_sym, int32_t)},
	{"error_sync_size", "()I", nullptr, $PROTECTED, $virtualMethod(lr_parser, error_sync_size, int32_t)},
	{"find_recovery_config", "(Z)Z", nullptr, $PROTECTED, $virtualMethod(lr_parser, find_recovery_config, bool, bool)},
	{"getScanner", "()Lcom/sun/java_cup/internal/runtime/Scanner;", nullptr, $PUBLIC, $virtualMethod(lr_parser, getScanner, $Scanner*)},
	{"get_action", "(II)S", nullptr, $PROTECTED | $FINAL, $method(lr_parser, get_action, int16_t, int32_t, int32_t)},
	{"get_reduce", "(II)S", nullptr, $PROTECTED | $FINAL, $method(lr_parser, get_reduce, int16_t, int32_t, int32_t)},
	{"init_actions", "()V", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(lr_parser, init_actions, void), "java.lang.Exception"},
	{"parse", "()Lcom/sun/java_cup/internal/runtime/Symbol;", nullptr, $PUBLIC, $virtualMethod(lr_parser, parse, $Symbol*), "java.lang.Exception"},
	{"parse_lookahead", "(Z)V", nullptr, $PROTECTED, $virtualMethod(lr_parser, parse_lookahead, void, bool), "java.lang.Exception"},
	{"production_table", "()[[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(lr_parser, production_table, $shortArray2*)},
	{"read_lookahead", "()V", nullptr, $PROTECTED, $virtualMethod(lr_parser, read_lookahead, void), "java.lang.Exception"},
	{"reduce_table", "()[[S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(lr_parser, reduce_table, $shortArray2*)},
	{"report_error", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(lr_parser, report_error, void, $String*, Object$*)},
	{"report_fatal_error", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(lr_parser, report_fatal_error, void, $String*, Object$*), "java.lang.Exception"},
	{"restart_lookahead", "()V", nullptr, $PROTECTED, $virtualMethod(lr_parser, restart_lookahead, void), "java.lang.Exception"},
	{"scan", "()Lcom/sun/java_cup/internal/runtime/Symbol;", nullptr, $PUBLIC, $virtualMethod(lr_parser, scan, $Symbol*), "java.lang.Exception"},
	{"setScanner", "(Lcom/sun/java_cup/internal/runtime/Scanner;)V", nullptr, $PUBLIC, $virtualMethod(lr_parser, setScanner, void, $Scanner*)},
	{"shift_under_error", "()Z", nullptr, $PROTECTED, $virtualMethod(lr_parser, shift_under_error, bool)},
	{"start_production", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(lr_parser, start_production, int32_t)},
	{"start_state", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(lr_parser, start_state, int32_t)},
	{"syntax_error", "(Lcom/sun/java_cup/internal/runtime/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(lr_parser, syntax_error, void, $Symbol*)},
	{"try_parse_ahead", "(Z)Z", nullptr, $PROTECTED, $virtualMethod(lr_parser, try_parse_ahead, bool, bool), "java.lang.Exception"},
	{"unpackFromStrings", "([Ljava/lang/String;)[[S", nullptr, $PROTECTED | $STATIC, $staticMethod(lr_parser, unpackFromStrings, $shortArray2*, $StringArray*)},
	{"unrecovered_syntax_error", "(Lcom/sun/java_cup/internal/runtime/Symbol;)V", nullptr, $PUBLIC, $virtualMethod(lr_parser, unrecovered_syntax_error, void, $Symbol*), "java.lang.Exception"},
	{"user_init", "()V", nullptr, $PUBLIC, $virtualMethod(lr_parser, user_init, void), "java.lang.Exception"},
	{}
};

$ClassInfo _lr_parser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.java_cup.internal.runtime.lr_parser",
	"java.lang.Object",
	nullptr,
	_lr_parser_FieldInfo_,
	_lr_parser_MethodInfo_
};

$Object* allocate$lr_parser($Class* clazz) {
	return $of($alloc(lr_parser));
}

void lr_parser::init$() {
	this->_done_parsing = false;
	$set(this, stack, $new($Stack));
}

void lr_parser::init$($Scanner* s) {
	lr_parser::init$();
	setScanner(s);
}

int32_t lr_parser::error_sync_size() {
	return lr_parser::_error_sync_size;
}

void lr_parser::done_parsing() {
	this->_done_parsing = true;
}

void lr_parser::setScanner($Scanner* s) {
	$set(this, _scanner, s);
}

$Scanner* lr_parser::getScanner() {
	return this->_scanner;
}

void lr_parser::user_init() {
}

$Symbol* lr_parser::scan() {
	return $nc($(getScanner()))->next_token();
}

void lr_parser::report_fatal_error($String* message, Object$* info) {
	done_parsing();
	report_error(message, info);
	$throwNew($Exception, "Can\'t recover from previous error(s)"_s);
}

void lr_parser::report_error($String* message, Object$* info) {
	$useLocalCurrentObjectStackCache();
	$nc($System::err)->print(message);
	if ($instanceOf($Symbol, info)) {
		if ($nc(($cast($Symbol, info)))->left != -1) {
			$nc($System::err)->println($$str({" at character "_s, $$str(($cast($Symbol, info))->left), " of input"_s}));
		} else {
			$nc($System::err)->println(""_s);
		}
	} else {
		$nc($System::err)->println(""_s);
	}
}

void lr_parser::syntax_error($Symbol* cur_token) {
	report_error("Syntax error"_s, cur_token);
}

void lr_parser::unrecovered_syntax_error($Symbol* cur_token) {
	report_fatal_error("Couldn\'t repair and continue parse"_s, cur_token);
}

int16_t lr_parser::get_action(int32_t state, int32_t sym) {
	int16_t tag = 0;
	int32_t first = 0;
	int32_t last = 0;
	int32_t probe = 0;
	$var($shorts, row, $nc(this->action_tab)->get(state));
	if ($nc(row)->length < 20) {
		for (probe = 0; probe < row->length; ++probe) {
			tag = row->get(probe++);
			if (tag == sym || tag == -1) {
				return row->get(probe);
			}
		}
	} else {
		first = 0;
		last = (row->length - 1) / 2 - 1;
		while (first <= last) {
			probe = (first + last) / 2;
			if (sym == row->get(probe * 2)) {
				return row->get(probe * 2 + 1);
			} else if (sym > row->get(probe * 2)) {
				first = probe + 1;
			} else {
				last = probe - 1;
			}
		}
		return row->get(row->length - 1);
	}
	return (int16_t)0;
}

int16_t lr_parser::get_reduce(int32_t state, int32_t sym) {
	int16_t tag = 0;
	$var($shorts, row, $nc(this->reduce_tab)->get(state));
	if (row == nullptr) {
		return (int16_t)-1;
	}
	for (int32_t probe = 0; probe < $nc(row)->length; ++probe) {
		tag = row->get(probe++);
		if (tag == sym || tag == -1) {
			return row->get(probe);
		}
	}
	return (int16_t)-1;
}

$Symbol* lr_parser::parse() {
	$useLocalCurrentObjectStackCache();
	int32_t act = 0;
	$var($Symbol, lhs_sym, nullptr);
	int16_t handle_size = 0;
	int16_t lhs_sym_num = 0;
	$set(this, production_tab, production_table());
	$set(this, action_tab, action_table());
	$set(this, reduce_tab, reduce_table());
	init_actions();
	user_init();
	$set(this, cur_token, scan());
	$nc(this->stack)->removeAllElements();
	$nc(this->stack)->push($$new($Symbol, 0, start_state()));
	this->tos = 0;
	for (this->_done_parsing = false; !this->_done_parsing;) {
		if ($nc(this->cur_token)->used_by_parser) {
			$throwNew($Error, "Symbol recycling detected (fix your scanner)."_s);
		}
		act = get_action($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state, $nc(this->cur_token)->sym);
		if (act > 0) {
			$nc(this->cur_token)->parse_state = act - 1;
			$nc(this->cur_token)->used_by_parser = true;
			$nc(this->stack)->push(this->cur_token);
			++this->tos;
			$set(this, cur_token, scan());
		} else if (act < 0) {
			$assign(lhs_sym, do_action((-act) - 1, this, this->stack, this->tos));
			lhs_sym_num = $nc($nc(this->production_tab)->get((-act) - 1))->get(0);
			handle_size = $nc($nc(this->production_tab)->get((-act) - 1))->get(1);
			for (int32_t i = 0; i < handle_size; ++i) {
				$nc(this->stack)->pop();
				--this->tos;
			}
			act = get_reduce($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state, lhs_sym_num);
			$nc(lhs_sym)->parse_state = act;
			lhs_sym->used_by_parser = true;
			$nc(this->stack)->push(lhs_sym);
			++this->tos;
		} else if (act == 0) {
			syntax_error(this->cur_token);
			if (!error_recovery(false)) {
				unrecovered_syntax_error(this->cur_token);
				done_parsing();
			} else {
				$assign(lhs_sym, $cast($Symbol, $nc(this->stack)->peek()));
			}
		}
	}
	return lhs_sym;
}

void lr_parser::debug_message($String* mess) {
	$nc($System::err)->println(mess);
}

void lr_parser::dump_stack() {
	$useLocalCurrentObjectStackCache();
	if (this->stack == nullptr) {
		debug_message("# Stack dump requested, but stack is null"_s);
		return;
	}
	debug_message("============ Parse Stack Dump ============"_s);
	for (int32_t i = 0; i < $nc(this->stack)->size(); ++i) {
		$var($String, var$0, $$str({"Symbol: "_s, $$str($nc(($cast($Symbol, $($nc(this->stack)->get(i)))))->sym), " State: "_s}));
		debug_message($$concat(var$0, $$str($nc(($cast($Symbol, $($nc(this->stack)->get(i)))))->parse_state)));
	}
	debug_message("=========================================="_s);
}

void lr_parser::debug_reduce(int32_t prod_num, int32_t nt_num, int32_t rhs_size) {
	$useLocalCurrentObjectStackCache();
	debug_message($$str({"# Reduce with prod #"_s, $$str(prod_num), " [NT="_s, $$str(nt_num), ", SZ="_s, $$str(rhs_size), "]"_s}));
}

void lr_parser::debug_shift($Symbol* shift_tkn) {
	$useLocalCurrentObjectStackCache();
	debug_message($$str({"# Shift under term #"_s, $$str($nc(shift_tkn)->sym), " to state #"_s, $$str(shift_tkn->parse_state)}));
}

void lr_parser::debug_stack() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, "## STACK:"_s));
	for (int32_t i = 0; i < $nc(this->stack)->size(); ++i) {
		$var($Symbol, s, $cast($Symbol, $nc(this->stack)->get(i)));
		sb->append($$str({" <state "_s, $$str($nc(s)->parse_state), ", sym "_s, $$str(s->sym), ">"_s}));
		if ((i % 3) == 2 || (i == ($nc(this->stack)->size() - 1))) {
			debug_message($(sb->toString()));
			$assign(sb, $new($StringBuilder, "         "_s));
		}
	}
}

$Symbol* lr_parser::debug_parse() {
	$useLocalCurrentObjectStackCache();
	int32_t act = 0;
	$var($Symbol, lhs_sym, nullptr);
	int16_t handle_size = 0;
	int16_t lhs_sym_num = 0;
	$set(this, production_tab, production_table());
	$set(this, action_tab, action_table());
	$set(this, reduce_tab, reduce_table());
	debug_message("# Initializing parser"_s);
	init_actions();
	user_init();
	$set(this, cur_token, scan());
	debug_message($$str({"# Current Symbol is #"_s, $$str($nc(this->cur_token)->sym)}));
	$nc(this->stack)->removeAllElements();
	$nc(this->stack)->push($$new($Symbol, 0, start_state()));
	this->tos = 0;
	for (this->_done_parsing = false; !this->_done_parsing;) {
		if ($nc(this->cur_token)->used_by_parser) {
			$throwNew($Error, "Symbol recycling detected (fix your scanner)."_s);
		}
		act = get_action($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state, $nc(this->cur_token)->sym);
		if (act > 0) {
			$nc(this->cur_token)->parse_state = act - 1;
			$nc(this->cur_token)->used_by_parser = true;
			debug_shift(this->cur_token);
			$nc(this->stack)->push(this->cur_token);
			++this->tos;
			$set(this, cur_token, scan());
			debug_message($$str({"# Current token is "_s, this->cur_token}));
		} else if (act < 0) {
			$assign(lhs_sym, do_action((-act) - 1, this, this->stack, this->tos));
			lhs_sym_num = $nc($nc(this->production_tab)->get((-act) - 1))->get(0);
			handle_size = $nc($nc(this->production_tab)->get((-act) - 1))->get(1);
			debug_reduce((-act) - 1, lhs_sym_num, handle_size);
			for (int32_t i = 0; i < handle_size; ++i) {
				$nc(this->stack)->pop();
				--this->tos;
			}
			act = get_reduce($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state, lhs_sym_num);
			debug_message($$str({"# Reduce rule: top state "_s, $$str($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state), ", lhs sym "_s, $$str(lhs_sym_num), " -> state "_s, $$str(act)}));
			$nc(lhs_sym)->parse_state = act;
			lhs_sym->used_by_parser = true;
			$nc(this->stack)->push(lhs_sym);
			++this->tos;
			debug_message($$str({"# Goto state #"_s, $$str(act)}));
		} else if (act == 0) {
			syntax_error(this->cur_token);
			if (!error_recovery(true)) {
				unrecovered_syntax_error(this->cur_token);
				done_parsing();
			} else {
				$assign(lhs_sym, $cast($Symbol, $nc(this->stack)->peek()));
			}
		}
	}
	return lhs_sym;
}

bool lr_parser::error_recovery(bool debug) {
	$useLocalCurrentObjectStackCache();
	if (debug) {
		debug_message("# Attempting error recovery"_s);
	}
	if (!find_recovery_config(debug)) {
		if (debug) {
			debug_message("# Error recovery fails"_s);
		}
		return false;
	}
	read_lookahead();
	for (;;) {
		if (debug) {
			debug_message("# Trying to parse ahead"_s);
		}
		if (try_parse_ahead(debug)) {
			break;
		}
		if ($nc($nc(this->lookahead)->get(0))->sym == EOF_sym()) {
			if (debug) {
				debug_message("# Error recovery fails at EOF"_s);
			}
			return false;
		}
		if (debug) {
			debug_message($$str({"# Consuming Symbol #"_s, $$str($nc($(cur_err_token()))->sym)}));
		}
		restart_lookahead();
	}
	if (debug) {
		debug_message("# Parse-ahead ok, going back to normal parse"_s);
	}
	parse_lookahead(debug);
	return true;
}

bool lr_parser::shift_under_error() {
	int32_t var$0 = $nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state;
	return get_action(var$0, error_sym()) > 0;
}

bool lr_parser::find_recovery_config(bool debug) {
	$useLocalCurrentObjectStackCache();
	$var($Symbol, error_token, nullptr);
	int32_t act = 0;
	if (debug) {
		debug_message("# Finding recovery state on stack"_s);
	}
	int32_t right_pos = $nc(($cast($Symbol, $($nc(this->stack)->peek()))))->right;
	int32_t left_pos = $nc(($cast($Symbol, $($nc(this->stack)->peek()))))->left;
	while (!shift_under_error()) {
		if (debug) {
			debug_message($$str({"# Pop stack by one, state was # "_s, $$str($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state)}));
		}
		left_pos = $nc(($cast($Symbol, $($nc(this->stack)->pop()))))->left;
		--this->tos;
		if ($nc(this->stack)->empty()) {
			if (debug) {
				debug_message("# No recovery state found on stack"_s);
			}
			return false;
		}
	}
	int32_t var$0 = $nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state;
	act = get_action(var$0, error_sym());
	if (debug) {
		debug_message($$str({"# Recover state found (#"_s, $$str($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state), ")"_s}));
		debug_message($$str({"# Shifting on error to state #"_s, $$str((act - 1))}));
	}
	$assign(error_token, $new($Symbol, error_sym(), left_pos, right_pos));
	error_token->parse_state = act - 1;
	error_token->used_by_parser = true;
	$nc(this->stack)->push(error_token);
	++this->tos;
	return true;
}

void lr_parser::read_lookahead() {
	$set(this, lookahead, $new($SymbolArray, error_sync_size()));
	for (int32_t i = 0; i < error_sync_size(); ++i) {
		$nc(this->lookahead)->set(i, this->cur_token);
		$set(this, cur_token, scan());
	}
	this->lookahead_pos = 0;
}

$Symbol* lr_parser::cur_err_token() {
	return $nc(this->lookahead)->get(this->lookahead_pos);
}

bool lr_parser::advance_lookahead() {
	++this->lookahead_pos;
	return this->lookahead_pos < error_sync_size();
}

void lr_parser::restart_lookahead() {
	for (int32_t i = 1; i < error_sync_size(); ++i) {
		$nc(this->lookahead)->set(i - 1, $nc(this->lookahead)->get(i));
	}
	$set(this, cur_token, scan());
	$nc(this->lookahead)->set(error_sync_size() - 1, this->cur_token);
	this->lookahead_pos = 0;
}

bool lr_parser::try_parse_ahead(bool debug) {
	$useLocalCurrentObjectStackCache();
	int32_t act = 0;
	int16_t lhs = 0;
	int16_t rhs_size = 0;
	$var($virtual_parse_stack, vstack, $new($virtual_parse_stack, this->stack));
	for (;;) {
		int32_t var$0 = vstack->top();
		act = get_action(var$0, $nc($(cur_err_token()))->sym);
		if (act == 0) {
			return false;
		}
		if (act > 0) {
			vstack->push(act - 1);
			if (debug) {
				debug_message($$str({"# Parse-ahead shifts Symbol #"_s, $$str($nc($(cur_err_token()))->sym), " into state #"_s, $$str((act - 1))}));
			}
			if (!advance_lookahead()) {
				return true;
			}
		} else {
			if ((-act) - 1 == start_production()) {
				if (debug) {
					debug_message("# Parse-ahead accepts"_s);
				}
				return true;
			}
			lhs = $nc($nc(this->production_tab)->get((-act) - 1))->get(0);
			rhs_size = $nc($nc(this->production_tab)->get((-act) - 1))->get(1);
			for (int32_t i = 0; i < rhs_size; ++i) {
				vstack->pop();
			}
			if (debug) {
				debug_message($$str({"# Parse-ahead reduces: handle size = "_s, $$str(rhs_size), " lhs = #"_s, $$str(lhs), " from state #"_s, $$str(vstack->top())}));
			}
			vstack->push(get_reduce(vstack->top(), lhs));
			if (debug) {
				debug_message($$str({"# Goto state #"_s, $$str(vstack->top())}));
			}
		}
	}
}

void lr_parser::parse_lookahead(bool debug) {
	$useLocalCurrentObjectStackCache();
	int32_t act = 0;
	$var($Symbol, lhs_sym, nullptr);
	int16_t handle_size = 0;
	int16_t lhs_sym_num = 0;
	this->lookahead_pos = 0;
	if (debug) {
		debug_message("# Reparsing saved input with actions"_s);
		debug_message($$str({"# Current Symbol is #"_s, $$str($nc($(cur_err_token()))->sym)}));
		debug_message($$str({"# Current state is #"_s, $$str($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state)}));
	}
	while (!this->_done_parsing) {
		int32_t var$0 = $nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state;
		act = get_action(var$0, $nc($(cur_err_token()))->sym);
		if (act > 0) {
			$nc($(cur_err_token()))->parse_state = act - 1;
			$nc($(cur_err_token()))->used_by_parser = true;
			if (debug) {
				debug_shift($(cur_err_token()));
			}
			$nc(this->stack)->push($(cur_err_token()));
			++this->tos;
			if (!advance_lookahead()) {
				if (debug) {
					debug_message("# Completed reparse"_s);
				}
				return;
			}
			if (debug) {
				debug_message($$str({"# Current Symbol is #"_s, $$str($nc($(cur_err_token()))->sym)}));
			}
		} else if (act < 0) {
			$assign(lhs_sym, do_action((-act) - 1, this, this->stack, this->tos));
			lhs_sym_num = $nc($nc(this->production_tab)->get((-act) - 1))->get(0);
			handle_size = $nc($nc(this->production_tab)->get((-act) - 1))->get(1);
			if (debug) {
				debug_reduce((-act) - 1, lhs_sym_num, handle_size);
			}
			for (int32_t i = 0; i < handle_size; ++i) {
				$nc(this->stack)->pop();
				--this->tos;
			}
			act = get_reduce($nc(($cast($Symbol, $($nc(this->stack)->peek()))))->parse_state, lhs_sym_num);
			$nc(lhs_sym)->parse_state = act;
			lhs_sym->used_by_parser = true;
			$nc(this->stack)->push(lhs_sym);
			++this->tos;
			if (debug) {
				debug_message($$str({"# Goto state #"_s, $$str(act)}));
			}
		} else if (act == 0) {
			report_fatal_error("Syntax error"_s, lhs_sym);
			return;
		}
	}
}

$shortArray2* lr_parser::unpackFromStrings($StringArray* sa) {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder, $nc(sa)->get(0)));
	for (int32_t i = 1; i < $nc(sa)->length; ++i) {
		sb->append(sa->get(i));
	}
	int32_t n = 0;
	int32_t var$0 = (((int32_t)sb->charAt(n)) << 16);
	int32_t size1 = var$0 | ((int32_t)sb->charAt(n + 1));
	n += 2;
	$var($shortArray2, result, $new($shortArray2, size1));
	for (int32_t i = 0; i < size1; ++i) {
		int32_t var$1 = (((int32_t)sb->charAt(n)) << 16);
		int32_t size2 = var$1 | ((int32_t)sb->charAt(n + 1));
		n += 2;
		result->set(i, $$new($shorts, size2));
		for (int32_t j = 0; j < size2; ++j) {
			$nc(result->get(i))->set(j, (int16_t)(sb->charAt(n++) - 2));
		}
	}
	return result;
}

lr_parser::lr_parser() {
}

$Class* lr_parser::load$($String* name, bool initialize) {
	$loadClass(lr_parser, name, initialize, &_lr_parser_ClassInfo_, allocate$lr_parser);
	return class$;
}

$Class* lr_parser::class$ = nullptr;

				} // runtime
			} // internal
		} // java_cup
	} // sun
} // com