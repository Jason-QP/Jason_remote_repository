# 1 "e:\\softwaretesting\\test2\\\\combined_test2.c"
# 1 "E:\\LoadRunnerTemp\\include/lrun.h" 1
 
 












 











# 103 "E:\\LoadRunnerTemp\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "E:\\LoadRunnerTemp\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "E:\\LoadRunnerTemp\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "E:\\LoadRunnerTemp\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "E:\\LoadRunnerTemp\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "E:\\LoadRunnerTemp\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "E:\\LoadRunnerTemp\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "E:\\LoadRunnerTemp\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "E:\\LoadRunnerTemp\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "E:\\LoadRunnerTemp\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "E:\\LoadRunnerTemp\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "E:\\LoadRunnerTemp\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "E:\\LoadRunnerTemp\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "E:\\LoadRunnerTemp\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "E:\\LoadRunnerTemp\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "E:\\LoadRunnerTemp\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "E:\\LoadRunnerTemp\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "E:\\LoadRunnerTemp\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "E:\\LoadRunnerTemp\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "E:\\LoadRunnerTemp\\include/lrun.h"


# 1075 "E:\\LoadRunnerTemp\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "e:\\softwaretesting\\test2\\\\combined_test2.c" 2

# 1 "E:\\LoadRunnerTemp\\include/SharedParameter.h" 1



 
 
 
 
# 100 "E:\\LoadRunnerTemp\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "e:\\softwaretesting\\test2\\\\combined_test2.c" 2

# 1 "globals.h" 1



 
 

# 1 "E:\\LoadRunnerTemp\\include/web_api.h" 1







# 1 "E:\\LoadRunnerTemp\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "E:\\LoadRunnerTemp\\include/as_web.h"


# 802 "E:\\LoadRunnerTemp\\include/as_web.h"



























# 840 "E:\\LoadRunnerTemp\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "E:\\LoadRunnerTemp\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "E:\\LoadRunnerTemp\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2

# 1 "AsyncCallbacks.c" 1
 
 
 
int Poll_0_RequestCB()
{
	 

	 
	 

	 
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

int Poll_0_ResponseCB(
	const char *	aResponseHeadersStr,
	int				aResponseHeadersLen,
	const char *	aResponseBodyStr,
	int				aResponseBodyLen,
	int				aHttpStatusCode)
{
	 

	 
	 

	return WEB_ASYNC_CB_RC_OK;
}

# 9 "globals.h" 2





 
 




# 3 "e:\\softwaretesting\\test2\\\\combined_test2.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "e:\\softwaretesting\\test2\\\\combined_test2.c" 2

# 1 "Action.c" 1
Action()
{

	web_add_cookie("PHPSESSID=1cc80924ccfa386761566986283992a1; DOMAIN=192.168.129.196");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.html", 
		"URL=http://192.168.129.196/home/login/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t409.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(10);

	web_submit_data("login_submit", 
		"Action=http://192.168.129.196/home/login/login_submit", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/login/index.html", 
		"Snapshot=t410.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=username", "Value=lixiaobin", "ENDITEM", 
		"Name=password", "Value=123456", "ENDITEM", 
		"Name=captcha", "Value=33", "ENDITEM", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("192.168.129.196", 
		"URL=http://192.168.129.196/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/home/login/index.html", 
		"Snapshot=t411.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("get_note_list", 
		"URL=http://192.168.129.196/home/api/get_note_list?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t412.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("get_article_list", 
		"URL=http://192.168.129.196/home/api/get_article_list?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t413.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("get_view_data", 
		"URL=http://192.168.129.196/home/api/get_view_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t414.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("get_view_log", 
		"URL=http://192.168.129.196/home/api/get_view_log", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t415.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("log_list", 
		"URL=http://192.168.129.196/home/api/log_list?page=1&limit=20", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t416.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("get_article_list_2", 
		"URL=http://192.168.129.196/home/api/get_article_list?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t417.inf", 
		"Mode=HTML", 
		"LAST");

	web_url("get_view_data_2", 
		"URL=http://192.168.129.196/home/api/get_view_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t418.inf", 
		"Mode=HTML", 
		"LAST");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t419.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("X-Goog-Update-AppId", 
		"kbgigmcnifmaklccibmlepmahpfdhjch,nhdogjmejiglipccpnnnanhbledajbpd,nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-120.0.6099.129");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:p4M8zla1dQn0uXNjFESRzZEorgtGCyc3Ax7MqxMaqBY&cup2hreq=51c083df509b0fc7281010b305a4ffba95e029afbb9dad8e655d4f2af51457d3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t420.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"kbgigmcnifmaklccibmlepmahpfdhjch\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\"internal\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.73e69b89448134fc3f1785450b7cfa6a323dfe791e5c0f97a150279d1ba589aa\"}]},\"ping\":{\"ping_freshness\":\"{95d3b77b-beb2-493b-b518-365be12471d5}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"0.2.9\"},{\"appid\""
		":\"nhdogjmejiglipccpnnnanhbledajbpd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\"internal\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.ae69ebb7a546c360f81fecb4b75a420df107d609ea746a70864f4c2e585c1de2\"}]},\"ping\":{\"ping_freshness\":\"{a0cb7ec6-8ae3-47b7-91c5-a2cc8d15fb04}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"6.5.1\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\""
		"other\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.81e3a4d43a73699e1b7781723f56b8717175c536685c5450122b30789464ad82\"}]},\"ping\":{\"ping_freshness\":\"{f515c6af-f2b3-4c40-86fc-7ec6defa4e3a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{"
		"\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"120.0.6099.129\",\"protocol\":\"3.1\",\"requestid\":\"{11d2951b-827f-4c62-b5ac-141c48c04fef}\",\"sessionid\":\"{0213e44a-3139-4acd-bebb-9b8ed8a556f1}\",\"updaterversion\":\"120.0.6099.129\"}}", 
		"LAST");

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("flow_type", 
		"URL=http://192.168.129.196/home/cate/flow_type", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/", 
		"Snapshot=t421.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_cookie("gougutab={\"tab_id\":\"32\",\"tab_array\":[{\"id\":\"32\",\"url\":\"/home/cate/flow_type\",\"title\":\"审批类型\"}]}; DOMAIN=192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("flow_type_2", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t422.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("flow_type_add", 
		"URL=http://192.168.129.196/home/cate/flow_type_add", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t423.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("get_department_select", 
		"URL=http://192.168.129.196/api/index/get_department_select?keyword=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t424.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"http://192.168.129.196");

	lr_think_time(5);

 
# 238 "Action.c"
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=http://192.168.129.196/home/index/index", 
		"PollIntervalMs=9900", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		"LAST");

	web_custom_request("index", 
		"URL=http://192.168.129.196/home/index/index", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/", 
		"Snapshot=t425.inf", 
		"Mode=HTML", 
		"EncType=", 
		"LAST");

	web_submit_data("flow_type_add_2", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t429.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=type", "Value=1", "ENDITEM", 
		"Name=title", "Value=test", "ENDITEM", 
		"Name=department_ids", "Value=", "ENDITEM", 
		"Name=name", "Value=test", "ENDITEM", 
		"Name=icon", "Value=icon-jichupeizhi", "ENDITEM", 
		"Name=id", "Value=0", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"ofWwWk5bhyidegiZijoia7ntsqD3I8+PQsWI068O/rc=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"2B74B64E9B17599B91015A8D1EB147B7FFE558A8");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

	web_url("geturl.php", 
		"URL=http://config.pinyin.sogou.com/api/toolbox/geturl.php?h=CCC53520B843C480D6E5E83629CE8383&v=9.6.0.3568&r=0000_11_5c22aa18aacd73dbeb4ce82881547dd31", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t431.inf", 
		"LAST");

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,obedbbhbpmojnkanicioggnmelmoomoc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,kiabhabjdbkjdpjbpigfodbdjmbglcoo,lmelglejhemejginpboagddgdfbepgmp,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,efniojlnjndmcbiieegkicadnoecjjef,jflookgnkcckhobaglndicnbbgbonegd,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflhchccmppkfebkiaminageehmchikm,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-120.0.6099.129");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:tyO8g3HPQnDy5HqefINxc_h4slULESO7mORPQ2ayBvc&cup2hreq=a867f0ef9a506af7dcf98f12fe671663610beb3c767d5b739a69b9c646589279", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t432.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{aeb5f217-2984-4518-b4d1-3b267c5d3f5c}\",\"rd\":6200},\"updatecheck\":{},\"version\":\""
		"1.3.36.141\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5817,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{1ff6e383-4558-4eca-8599-fdb3dd851efe}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\"{3fffb28c-d0e5-4894-808d-c79f096c494f}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"accept_locale\":\"ZHCN500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\","
		"\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\"{2acbef10-aa7e-4256-8eec-ef1db5b7991c}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\""
		"{f141dd27-e590-4243-bd1b-40f75c581ff1}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{0f14561e-9d56-46e4-b992-c270be8b1b2b}\",\"rd\":6200},\"updatecheck\":{},\"version\":\""
		"2023.9.4.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.d150a306d4f66bb142f405df4fc9e0f070b6f266e5f180f3bda29b5410c5f8b5\"}]},\"ping\":{\"ping_freshness\":\"{432c2976-04d9-48c7-ac3e-ebdf29577277}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"426\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1"
		":j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{dfb9d93b-2707-4624-8bb7-05d52a702e52}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\""
		"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{ed262a17-9d7a-4c6f-bfa2-9deb72d419d3}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\""
		"{adbf2597-e58d-44f5-84fb-7786758eefb7}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.8e34893ddcba80b5c528309ed27aef7c767f00133add98ce303ab1462f4ddfac\"}]},\"ping\":{\"ping_freshness\":\"{8c69fd4a-508f-473b-a6c9-8dd3fadcb331}\",\"rd\":6200},\"updatecheck\":{},\"version\":\""
		"8439\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\"{e7179239-3629-4ebc-baf2-5746c386bf64}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"zh-CN\","
		"\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{7fe6eb36-b982-446a-9ddf-4c9014051a68}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d6ba1124f51bb0d5449d9c3dfb7677f6a8daaebb32b2e9be4c5b9f683d9323af\"}]},\"ping\":{\"ping_freshness\":\"{c4641212-8c16-4d3e-8f87-c3c01f61f983}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"801\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.7725493ed68e793a0033e02d76eb3d72a848b9a519394d0865088d34555b6a26\"}]},\"ping\":{\""
		"ping_freshness\":\"{33b3134d-1a43-49d1-a654-66ab19bede4a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"3012\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\""
		"{da3acc3b-e3eb-4d66-838d-037814e31a79}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{ed070c88-cb59-4e04-8448-39b2fccaf925}\",\"rd\":6200},\"updatecheck\":{},\"version"
		"\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{4604bde4-c435-4787-879b-c620ca299b2a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:24vr:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6154,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.68f2a97ebd0c5436160350ac66184e9f1729021a9cbd15243ef2a5bcac1219d7\"}]},\"ping\":{\"ping_freshness\":\"{46c6263a-5173-4ee7-9a01-1375cf1776d8}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.15.4\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,"
		"\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{32e1c734-d1f2-4880-8233-c027b924264a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x/251f/251l:\",\"cohorthint\":\"General release\",\"cohortname\":\"Control\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d0d9621c5361c9598566d6096509d86e75eaa0b19bd7c4aa8ecf3f146fa66147\"}]},\"ping\":{\"ping_freshness\":\"{7d3fa06a-3236-411f-84fe-91a8b3d19594}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.13.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6127,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.a88f57a307b604c88507143c96d383ed913fa98543928fd172483d3f00c0c44f\"}]},\""
		"ping\":{\"ping_freshness\":\"{3a75cf77-e45e-4d58-a13d-7b59deddab53}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.18.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"120.0.6099.129\",\"protocol\":\"3.1\","
		"\"requestid\":\"{fb7411d2-6a0d-4001-95ea-bb020d7fbb0f}\",\"sessionid\":\"{f0851a56-b4fb-4db1-95aa-bb952a558c4b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.352\"},\"updaterversion\":\"120.0.6099.129\"}}", 
		"LAST");

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("flow_type_add_3", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t433.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=type", "Value=1", "ENDITEM", 
		"Name=title", "Value=test3", "ENDITEM", 
		"Name=department_ids", "Value=", "ENDITEM", 
		"Name=name", "Value=test", "ENDITEM", 
		"Name=icon", "Value=icon-jichupeizhi", "ENDITEM", 
		"Name=id", "Value=0", "ENDITEM", 
		"LAST");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"bEqhGxK2CCrycM/Sz3Jl3+HlMcq4a0/wQ6WX1KOSFTo=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"B7008E592D4BFBAFC3A7F9C4DBF6D07BF46D4413");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");


	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 


	 
# 412 "Action.c"

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"ykUI+4EpP49KPpxOauem4Bbvm1ZDN5O1Bms8yXJNkMU=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"CF4CC0C2F8B5685DBC3FAB4ABA0A769A0BB9C4F5");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");


	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("flow_type_add_4", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t437.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=type", "Value=1", "ENDITEM", 
		"Name=title", "Value=test4", "ENDITEM", 
		"Name=department_ids", "Value=", "ENDITEM", 
		"Name=name", "Value=test", "ENDITEM", 
		"Name=icon", "Value=icon-jichupeizhi", "ENDITEM", 
		"Name=id", "Value=0", "ENDITEM", 
		"LAST");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"/oXoAroQgIrryHY4N8OAVGHc+rqEaXc7LQQnC3sKpdM=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"984C7F8380740E9D45EC2E83EF198746ECFFA6CA");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");



	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("flow_type_add_5", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t439.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=type", "Value=1", "ENDITEM", 
		"Name=title", "Value=test5", "ENDITEM", 
		"Name=department_ids", "Value=", "ENDITEM", 
		"Name=name", "Value=test", "ENDITEM", 
		"Name=icon", "Value=icon-jichupeizhi", "ENDITEM", 
		"Name=id", "Value=0", "ENDITEM", 
		"LAST");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"yjEeImyWF6G0bw+DrCMjxAE1SlPFBKUWPlJWUs/WX4A=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"80AB5143340D1318C76E5ADDF74973179EF6F475");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 


	 
# 535 "Action.c"

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"LWCbCHKDczXrpMGxQqo+gj8T6XurIg6yacEvig9RnLE=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"E489A262FA3190D32A5211313DE37CA049FEA6D4");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");



	web_add_auto_header("Origin", 
		"http://192.168.129.196");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 


	 
# 577 "Action.c"

	lr_think_time(12);

	web_submit_data("flow_type_add_6", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t444.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=type", "Value=1", "ENDITEM", 
		"Name=title", "Value=test3", "ENDITEM", 
		"Name=department_ids", "Value=", "ENDITEM", 
		"Name=name", "Value=This is a test", "ENDITEM", 
		"Name=icon", "Value=icon-jichupeizhi", "ENDITEM", 
		"Name=id", "Value=0", "ENDITEM", 
		"LAST");

	lr_think_time(4);

 


	 
# 613 "Action.c"

	web_submit_data("flow_type_add_7", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t446.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=type", "Value=1", "ENDITEM", 
		"Name=title", "Value=test3", "ENDITEM", 
		"Name=department_ids", "Value=", "ENDITEM", 
		"Name=name", "Value=this is a test", "ENDITEM", 
		"Name=icon", "Value=icon-jichupeizhi", "ENDITEM", 
		"Name=id", "Value=0", "ENDITEM", 
		"LAST");

	lr_think_time(7);

	web_submit_data("flow_type_add_8", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t447.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=type", "Value=1", "ENDITEM", 
		"Name=title", "Value=test3", "ENDITEM", 
		"Name=department_ids", "Value=", "ENDITEM", 
		"Name=name", "Value=thisisatest", "ENDITEM", 
		"Name=icon", "Value=icon-jichupeizhi", "ENDITEM", 
		"Name=id", "Value=0", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_url("flow_type_3", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t448.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"http://192.168.129.196");

 


	 
# 677 "Action.c"

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(6);

	web_url("flow_type_add_9", 
		"URL=http://192.168.129.196/home/cate/flow_type_add?id=29", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t450.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("get_department_select_2", 
		"URL=http://192.168.129.196/api/index/get_department_select?keyword=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add?id=29", 
		"Snapshot=t451.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"http://192.168.129.196");

 


	 
# 724 "Action.c"

	lr_think_time(4);

	web_submit_data("flow_type_add_10", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add?id=29", 
		"Snapshot=t453.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=type", "Value=1", "ENDITEM", 
		"Name=title", "Value=testt3", "ENDITEM", 
		"Name=department_ids", "Value=", "ENDITEM", 
		"Name=name", "Value=thisisatest", "ENDITEM", 
		"Name=icon", "Value=icon-jichupeizhi", "ENDITEM", 
		"Name=id", "Value=29", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_url("flow_type_4", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t454.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_header("Origin", 
		"http://192.168.129.196");

	lr_think_time(4);

	web_submit_data("flow_type_check", 
		"Action=http://192.168.129.196/home/cate/flow_type_check", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t455.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=id", "Value=29", "ENDITEM", 
		"Name=status", "Value=0", "ENDITEM", 
		"LAST");

	web_url("flow_type_5", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t456.inf", 
		"Mode=HTML", 
		"LAST");

	web_add_auto_header("Origin", 
		"http://192.168.129.196");

 


	 
# 798 "Action.c"

 


	web_stop_async("ID=Poll_0", 
		"LAST");

	web_submit_data("flow_type_check_2", 
		"Action=http://192.168.129.196/home/cate/flow_type_check", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t458.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=id", "Value=29", "ENDITEM", 
		"Name=status", "Value=1", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_url("flow_type_6", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t459.inf", 
		"Mode=HTML", 
		"LAST");

	return 0;
}
# 5 "e:\\softwaretesting\\test2\\\\combined_test2.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "e:\\softwaretesting\\test2\\\\combined_test2.c" 2

