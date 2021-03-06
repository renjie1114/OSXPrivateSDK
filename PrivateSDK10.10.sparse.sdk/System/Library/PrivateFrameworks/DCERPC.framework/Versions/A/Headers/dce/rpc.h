/* Generated by IDL compiler version FreeDCE 1.1.0.7 with GNU Flex/Bison */
#ifndef rpc_v0_0_included
#define rpc_v0_0_included
#ifndef IDLBASE_H
#include <dce/idlbase.h>
#endif

#ifdef __cplusplus
    extern "C" {
#endif

#ifndef nbase_v0_0_included
#include <dce/nbase.h>
#endif
#ifndef lbase_v0_0_included
#include <dce/lbase.h>
#endif
#ifndef rpcsts_v0_0_included
#include <dce/rpcsts.h>
#endif
#ifndef rpcbase_v0_0_included
#include <dce/rpcbase.h>
#endif
#ifndef rpcpvt_v0_0_included
#include <dce/rpcpvt.h>
#endif
#ifndef nca_status_v0_0_included
#include <dce/ncastat.h>
#endif
#ifndef uuid_v0_0_included
#include <dce/uuid.h>
#endif
#ifndef ndrold_v0_0_included
#include <dce/ndrold.h>
#endif
#ifndef twr_v0_0_included
#include <dce/twr.h>
#endif
extern void rpc_binding_copy(
    /* [in] */ rpc_binding_handle_t src_binding_handle,
    /* [out] */ rpc_binding_handle_t *dst_binding_handle,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_free(
    /* [in, out] */ rpc_binding_handle_t *binding_handle,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_from_string_binding(
    /* [in] */ unsigned_char_p_t string_binding,
    /* [out] */ rpc_binding_handle_t *binding_handle,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_inq_object(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ idl_uuid_t *object_uuid,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_reset(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_set_object(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [in] */ uuid_p_t object_uuid,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_to_string_binding(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned_char_p_t *string_binding,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_vector_free(
    /* [in, out] */ rpc_binding_vector_p_t *binding_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_string_binding_compose(
    /* [in] */ unsigned_char_p_t string_object_uuid,
    /* [in] */ unsigned_char_p_t string_protseq,
    /* [in] */ unsigned_char_p_t string_netaddr,
    /* [in] */ unsigned_char_p_t string_endpoint,
    /* [in] */ unsigned_char_p_t string_options,
    /* [out] */ unsigned_char_p_t *string_binding,
    /* [out] */ unsigned32 *status
);
extern void rpc_string_binding_parse(
    /* [in] */ unsigned_char_p_t string_binding,
    /* [out] */ unsigned_char_p_t *string_object_uuid,
    /* [out] */ unsigned_char_p_t *string_protseq,
    /* [out] */ unsigned_char_p_t *string_netaddr,
    /* [out] */ unsigned_char_p_t *string_endpoint,
    /* [out] */ unsigned_char_p_t *string_options,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_set_auth_info(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [in] */ unsigned_char_p_t server_princ_name,
    /* [in] */ unsigned32 protect_level,
    /* [in] */ unsigned32 authn_svc,
    /* [in] */ rpc_auth_identity_handle_t auth_identity,
    /* [in] */ unsigned32 authz_svc,
    /* [out] */ unsigned32 *st
);
extern void rpc_binding_inq_auth_info(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned_char_p_t *server_princ_name,
    /* [out] */ unsigned32 *protect_level,
    /* [out] */ unsigned32 *authn_svc,
    /* [out] */ rpc_auth_identity_handle_t *auth_identity,
    /* [out] */ unsigned32 *authz_svc,
    /* [out] */ unsigned32 *st
);
extern void rpc_binding_inq_auth_caller(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ rpc_authz_cred_handle_t *privs,
    /* [out] */ unsigned_char_p_t *server_princ_name,
    /* [out] */ unsigned32 *protect_level,
    /* [out] */ unsigned32 *authn_svc,
    /* [out] */ unsigned32 *authz_svc,
    /* [out] */ unsigned32 *st
);
extern void rpc_binding_inq_auth_client(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ rpc_authz_handle_t *privs,
    /* [out] */ unsigned_char_p_t *server_princ_name,
    /* [out] */ unsigned32 *protect_level,
    /* [out] */ unsigned32 *authn_svc,
    /* [out] */ unsigned32 *authz_svc,
    /* [out] */ unsigned32 *st
);
extern void rpc_binding_set_transport_info(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [in] */ rpc_transport_info_handle_t info,
    /* [out] */ unsigned32 *st
);
extern void rpc_binding_inq_transport_info(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ rpc_transport_info_handle_t *info,
    /* [out] */ unsigned32 *st
);
extern void rpc_binding_inq_prot_seq(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned32 *prot_seq,
    /* [out] */ unsigned32 *st
);
extern void rpc_binding_inq_access_token_caller(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ rpc_access_token_p_t *token,
    /* [out] */ unsigned32 *st
);
extern void rpc_binding_server_from_client(
    /* [in] */ rpc_binding_handle_t cbinding_handle,
    /* [out] */ rpc_binding_handle_t *sbinding_handle,
    /* [out] */ unsigned32 *status
);
typedef struct rpc_call_attributes_v1_s_t {
unsigned32 version;
unsigned32 flags;
unsigned32 server_princ_name_buff_len;
idl_char *server_princ_name;
unsigned32 client_princ_name_buff_len;
idl_char *client_princ_name;
unsigned32 authn_level;
unsigned32 authn_protocol;
idl_boolean null_session;
} rpc_call_attributes_v1_t;
typedef rpc_call_attributes_v1_t *rpc_call_attributes_v1_p_t;
typedef rpc_call_attributes_v1_t rpc_call_attributes_t;
typedef rpc_call_attributes_t *rpc_call_attributes_p_t;
#define rpc_call_attributes_version (1)
#define rpc_query_server_principal_name (2)
#define rpc_query_client_principal_name (4)
extern void rpc_server_inq_call_attributes(
    /* [in] */ rpc_binding_handle_t cbinding_handle,
    /* [out] */ rpc_call_attributes_t *attributes,
    /* [out] */ unsigned32 *status
);
extern void rpc_binding_inq_security_context(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned32 *authn_svc,
    /* [out] */ idl_void_p_t *mech_context,
    /* [out] */ unsigned32 *st
);
typedef struct rpc_binding_handle_template_v1_s_t {
unsigned32 version;
unsigned32 flags;
unsigned_char_p_t protseq;
unsigned_char_p_t network_address;
unsigned_char_p_t string_endpoint;
unsigned_char_p_t reserved;
idl_uuid_t object_uuid;
} rpc_binding_handle_template_v1_t;
typedef rpc_binding_handle_template_v1_t rpc_binding_handle_template_t;
typedef struct rpc_binding_handle_security_v1_s_t {
unsigned32 version;
unsigned_char_p_t server_princ_name;
unsigned32 authn_level;
unsigned32 authn_protocol;
rpc_auth_identity_handle_t auth_identity;
unsigned32 authz_svc;
} rpc_binding_handle_security_v1_t;
typedef rpc_binding_handle_security_v1_t rpc_binding_handle_security_t;
typedef struct rpc_binding_handle_options_v1_s_t {
unsigned32 version;
unsigned32 flags;
unsigned32 com_timeout;
unsigned32 cancel_timeout;
} rpc_binding_handle_options_v1_t;
typedef rpc_binding_handle_options_v1_t rpc_binding_handle_options_t;
#define rpc_bht_noncausal (1)
#define rpc_bht_dont_linger (2)
#define rpc_bht_exclusive_and_guaranteed (4)
extern void rpc_binding_create(
    /* [in] */ rpc_binding_handle_template_t *_template,
    /* [in] */ rpc_binding_handle_security_t *security,
    /* [in] */ rpc_binding_handle_options_t *options,
    /* [out] */ rpc_binding_handle_t *handle,
    /* [out] */ unsigned32 *st
);
extern void rpc_if_id_vector_free(
    /* [in, out] */ rpc_if_id_vector_p_t *if_id_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_if_inq_id(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [out] */ rpc_if_id_t *if_id,
    /* [out] */ unsigned32 *status
);
extern void rpc_network_inq_protseqs(
    /* [out] */ rpc_protseq_vector_p_t *protseq_vector,
    /* [out] */ unsigned32 *status
);
extern boolean32 rpc_network_is_protseq_valid(
    /* [in] */ unsigned_char_p_t protseq,
    /* [out] */ unsigned32 *status
);
extern void rpc_object_set_type(
    /* [in] */ uuid_p_t object_uuid,
    /* [in] */ uuid_p_t type_uuid,
    /* [out] */ unsigned32 *status
);
extern void rpc_object_inq_type(
    /* [in] */ uuid_p_t object_uuid,
    /* [out] */ idl_uuid_t *type_uuid,
    /* [out] */ unsigned32 *status
);
extern void rpc_object_set_inq_fn(
    /* [in] */ rpc_object_inq_fn_t inq_fn,
    /* [out] */ unsigned32 *status
);
extern void rpc_protseq_vector_free(
    /* [in, out] */ rpc_protseq_vector_p_t *protseq_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_inq_bindings(
    /* [out] */ rpc_binding_vector_p_t *binding_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_listen(
    /* [in] */ unsigned32 max_calls_exec,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_use_all_protseqs(
    /* [in] */ unsigned32 max_call_requests,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_use_protseq(
    /* [in] */ unsigned_char_p_t protseq,
    /* [in] */ unsigned32 max_call_requests,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_use_protseq_ep(
    /* [in] */ unsigned_char_p_t protseq,
    /* [in] */ unsigned32 max_call_requests,
    /* [in] */ unsigned_char_p_t endpoint,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_use_protseq_socket(
    /* [in] */ unsigned_char_p_t protseq,
    /* [in] */ unsigned32 max_call_requests,
    /* [in] */ idl_void_p_t sockrep,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_use_protseq_if(
    /* [in] */ unsigned_char_p_t protseq,
    /* [in] */ unsigned32 max_call_requests,
    /* [in] */ rpc_if_handle_t if_spec,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_use_all_protseqs_if(
    /* [in] */ unsigned32 max_call_requests,
    /* [in] */ rpc_if_handle_t if_spec,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_register_if(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ uuid_p_t mgr_type_uuid,
    /* [in] */ rpc_mgr_epv_t mgr_epv,
    /* [out] */ unsigned32 *status
);
typedef void (*rpc_if_callback_fn_t)(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ idl_void_p_t context,
    /* [out] */ unsigned32 *status
);
#define rpc_if_autolisten (0x1)
#define rpc_if_ole (0x2)
#define rpc_if_allow_unknown_authority (0x4)
#define rpc_if_allow_secure_only (0x8)
#define rpc_if_allow_callbacks_with_no_auth (0x10)
#define rpc_if_allow_local_only (0x20)
#define rpc_if_sec_no_cache (0x40)
extern void rpc_server_register_if_ex(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ uuid_p_t mgr_type_uuid,
    /* [in] */ rpc_mgr_epv_t mgr_epv,
    /* [in] */ unsigned32 flags,
    /* [in] */ unsigned32 max_calls,
    /* [in] */ rpc_if_callback_fn_t if_callback,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_register_if_2(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ uuid_p_t mgr_type_uuid,
    /* [in] */ rpc_mgr_epv_t mgr_epv,
    /* [in] */ unsigned32 flags,
    /* [in] */ unsigned32 max_calls,
    /* [in] */ unsigned32 max_rpc_size,
    /* [in] */ rpc_if_callback_fn_t if_callback,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_unregister_if(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ uuid_p_t mgr_type_uuid,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_inq_if(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ uuid_p_t mgr_type_uuid,
    /* [out] */ rpc_mgr_epv_t *mgr_epv,
    /* [out] */ unsigned32 *status
);
extern void rpc_server_register_auth_info(
    /* [in] */ unsigned_char_p_t server_princ_name,
    /* [in] */ unsigned32 auth_svc,
    /* [in] */ rpc_auth_key_retrieval_fn_t get_key_func,
    /* [in] */ idl_void_p_t arg,
    /* [out] */ unsigned32 *st
);
extern void rpc_ep_register(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ rpc_binding_vector_p_t binding_vec,
    /* [in] */ uuid_vector_p_t object_uuid_vec,
    /* [in] */ unsigned_char_p_t annotation,
    /* [out] */ unsigned32 *status
);
extern void rpc_ep_register_no_replace(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ rpc_binding_vector_p_t binding_vec,
    /* [in] */ uuid_vector_p_t object_uuid_vec,
    /* [in] */ unsigned_char_p_t annotation,
    /* [out] */ unsigned32 *status
);
extern void rpc_ep_resolve_binding(
    /* [in] */ rpc_binding_handle_t binding_h,
    /* [in] */ rpc_if_handle_t if_spec,
    /* [out] */ unsigned32 *status
);
extern void rpc_ep_unregister(
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ rpc_binding_vector_p_t binding_vec,
    /* [in] */ uuid_vector_p_t object_uuid_vec,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_inq_com_timeout(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned32 *timeout,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_inq_if_ids(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ rpc_if_id_vector_p_t *if_id_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_inq_stats(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ rpc_stats_vector_p_t *statistics,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_stats_vector_free(
    /* [in, out] */ rpc_stats_vector_p_t *statistics,
    /* [out] */ unsigned32 *status
);
extern boolean32 rpc_mgmt_is_server_listening(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_set_server_idle_timeout(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [in] */ unsigned32 idle_secs,
    /* [out] */ error_status_t *status
);
extern unsigned32 rpc_mgmt_inq_server_idle_timeout(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ error_status_t *status
);
extern void rpc_mgmt_set_cancel_timeout(
    /* [in] */ signed32 seconds,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_set_com_timeout(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [in] */ unsigned32 timeout,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_set_server_stack_size(
    /* [in] */ unsigned32 thread_stack_size,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_stop_server_listening(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_inq_dflt_protect_level(
    /* [in] */ unsigned32 authn_svc,
    /* [out] */ unsigned32 *protect_level,
    /* [out] */ unsigned32 *st
);
extern void rpc_mgmt_set_authorization_fn(
    /* [in] */ rpc_mgmt_authorization_fn_t authorization_fn_arg,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_ep_elt_inq_begin(
    /* [in] */ rpc_binding_handle_t ep_binding,
    /* [in] */ unsigned32 inquiry_type,
    /* [in] */ rpc_if_id_p_t if_id,
    /* [in] */ unsigned32 vers_option,
    /* [in] */ uuid_p_t object_uuid,
    /* [out] */ rpc_ep_inq_handle_t *inquiry_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_ep_elt_inq_next(
    /* [in] */ rpc_ep_inq_handle_t inquiry_context,
    /* [out] */ rpc_if_id_t *if_id,
    /* [out] */ rpc_binding_handle_t *binding,
    /* [out] */ idl_uuid_t *object_uuid,
    /* [out] */ unsigned_char_p_t *annotation,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_ep_elt_inq_done(
    /* [in, out] */ rpc_ep_inq_handle_t *inquiry_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_ep_unregister(
    /* [in] */ rpc_binding_handle_t ep_binding,
    /* [in] */ rpc_if_id_p_t if_id,
    /* [in] */ rpc_binding_handle_t binding,
    /* [in] */ uuid_p_t object_uuid,
    /* [out] */ unsigned32 *status
);
extern void rpc_mgmt_inq_server_princ_name(
    /* [in] */ rpc_binding_handle_t binding_h,
    /* [in] */ unsigned32 authn_svc,
    /* [out] */ unsigned_char_p_t *server_princ_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_export(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ rpc_binding_vector_p_t binding_vector,
    /* [in] */ uuid_vector_p_t object_uuid_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_import_begin(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ uuid_p_t object_uuid,
    /* [out] */ rpc_ns_handle_t *import_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_import_done(
    /* [in, out] */ rpc_ns_handle_t *import_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_import_next(
    /* [in] */ rpc_ns_handle_t import_context,
    /* [out] */ rpc_binding_handle_t *binding,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_inq_entry_name(
    /* [in] */ rpc_binding_handle_t binding,
    /* [in] */ unsigned32 entry_name_syntax,
    /* [out] */ unsigned_char_p_t *entry_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_lookup_begin(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ uuid_p_t object_uuid,
    /* [in] */ unsigned32 binding_max_count,
    /* [out] */ rpc_ns_handle_t *lookup_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_lookup_done(
    /* [in, out] */ rpc_ns_handle_t *lookup_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_lookup_next(
    /* [in] */ rpc_ns_handle_t lookup_context,
    /* [out] */ rpc_binding_vector_p_t *binding_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_select(
    /* [in, out] */ rpc_binding_vector_t *binding_vector,
    /* [out] */ rpc_binding_handle_t *binding,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_binding_unexport(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [in] */ rpc_if_handle_t if_spec,
    /* [in] */ uuid_vector_p_t object_uuid_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_entry_expand_name(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [out] */ unsigned_char_p_t *expanded_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_entry_object_inq_begin(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [out] */ rpc_ns_handle_t *inquiry_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_entry_object_inq_done(
    /* [in, out] */ rpc_ns_handle_t *inquiry_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_entry_object_inq_next(
    /* [in] */ rpc_ns_handle_t inquiry_context,
    /* [out] */ idl_uuid_t *object_uuid,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_group_delete(
    /* [in] */ unsigned32 group_name_syntax,
    /* [in] */ unsigned_char_p_t group_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_group_mbr_add(
    /* [in] */ unsigned32 group_name_syntax,
    /* [in] */ unsigned_char_p_t group_name,
    /* [in] */ unsigned32 member_name_syntax,
    /* [in] */ unsigned_char_p_t member_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_group_mbr_inq_begin(
    /* [in] */ unsigned32 group_name_syntax,
    /* [in] */ unsigned_char_p_t group_name,
    /* [in] */ unsigned32 member_name_syntax,
    /* [out] */ rpc_ns_handle_t *inquiry_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_group_mbr_inq_done(
    /* [in, out] */ rpc_ns_handle_t *inquiry_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_group_mbr_inq_next(
    /* [in] */ rpc_ns_handle_t inquiry_context,
    /* [out] */ unsigned_char_p_t *member_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_group_mbr_remove(
    /* [in] */ unsigned32 group_name_syntax,
    /* [in] */ unsigned_char_p_t group_name,
    /* [in] */ unsigned32 member_name_syntax,
    /* [in] */ unsigned_char_p_t member_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_mgmt_binding_unexport(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [in] */ rpc_if_id_p_t if_id,
    /* [in] */ unsigned32 vers_option,
    /* [in] */ uuid_vector_p_t object_uuid_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_mgmt_entry_create(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_mgmt_entry_delete(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_mgmt_entry_inq_if_ids(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [out] */ rpc_if_id_vector_p_t *if_id_vector,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_mgmt_inq_exp_age(
    /* [out] */ unsigned32 *expiration_age,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_mgmt_set_exp_age(
    /* [in] */ unsigned32 expiration_age,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_mgmt_handle_set_exp_age(
    /* [in] */ rpc_ns_handle_t ns_handle,
    /* [in] */ unsigned32 expiration_age,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_profile_delete(
    /* [in] */ unsigned32 profile_name_syntax,
    /* [in] */ unsigned_char_p_t profile_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_profile_elt_add(
    /* [in] */ unsigned32 profile_name_syntax,
    /* [in] */ unsigned_char_p_t profile_name,
    /* [in] */ rpc_if_id_p_t if_id,
    /* [in] */ unsigned32 member_name_syntax,
    /* [in] */ unsigned_char_p_t member_name,
    /* [in] */ unsigned32 priority,
    /* [in] */ unsigned_char_p_t annotation,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_profile_elt_inq_begin(
    /* [in] */ unsigned32 profile_name_syntax,
    /* [in] */ unsigned_char_p_t profile_name,
    /* [in] */ unsigned32 inquiry_type,
    /* [in] */ rpc_if_id_p_t if_id,
    /* [in] */ unsigned32 if_vers_option,
    /* [in] */ unsigned32 member_name_syntax,
    /* [in] */ unsigned_char_p_t member_name,
    /* [out] */ rpc_ns_handle_t *inquiry_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_profile_elt_inq_done(
    /* [in, out] */ rpc_ns_handle_t *inquiry_context,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_profile_elt_inq_next(
    /* [in] */ rpc_ns_handle_t inquiry_context,
    /* [out] */ rpc_if_id_t *if_id,
    /* [out] */ unsigned_char_p_t *member_name,
    /* [out] */ unsigned32 *priority,
    /* [out] */ unsigned_char_p_t *annotation,
    /* [out] */ unsigned32 *status
);
extern void rpc_ns_profile_elt_remove(
    /* [in] */ unsigned32 profile_name_syntax,
    /* [in] */ unsigned_char_p_t profile_name,
    /* [in] */ rpc_if_id_p_t if_id,
    /* [in] */ unsigned32 member_name_syntax,
    /* [in] */ unsigned_char_p_t member_name,
    /* [out] */ unsigned32 *status
);
extern void rpc_string_free(
    /* [in, out] */ unsigned_char_p_t *string,
    /* [out] */ unsigned32 *status
);
typedef struct rpc_cs_c_set_s_t {
unsigned32 c_set;
unsigned16 c_max_bytes;
} rpc_cs_c_set_t;
typedef struct rpc_codeset_mgmt_s_t {
unsigned32 version;
unsigned32 count;
rpc_cs_c_set_t codesets[1];
} rpc_codeset_mgmt_t;
typedef rpc_codeset_mgmt_t *rpc_codeset_mgmt_p_t;
extern void rpc_ns_mgmt_set_attribute(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [in] */ uuid_p_t attr_type,
    /* [in] */ idl_void_p_t attr_val,
    /* [out] */ error_status_t *status
);
extern void rpc_ns_mgmt_read_attr_begin(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [in] */ uuid_p_t attr_type,
    /* [out] */ rpc_ns_handle_t *inquiry_context,
    /* [out] */ error_status_t *status
);
extern void rpc_ns_mgmt_read_attr_next(
    /* [in] */ rpc_ns_handle_t inquiry_context,
    /* [in] */ uuid_p_t attr_type,
    /* [out] */ idl_byte **value,
    /* [out] */ unsigned32 *length,
    /* [out] */ error_status_t *status
);
extern void rpc_ns_mgmt_read_attr_done(
    /* [in] */ rpc_ns_handle_p_t inquiry_context,
    /* [out] */ error_status_t *status
);
extern void rpc_ns_mgmt_remove_attribute(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [in] */ uuid_p_t attr_type,
    /* [out] */ error_status_t *status
);
extern void rpc_ns_mgmt_read_codesets(
    /* [in] */ unsigned32 entry_name_syntax,
    /* [in] */ unsigned_char_p_t entry_name,
    /* [out] */ rpc_codeset_mgmt_p_t *codesets_val,
    /* [out] */ error_status_t *status
);
extern void rpc_ns_import_ctx_add_eval(
    /* [in, out] */ rpc_ns_handle_t *import_ctx,
    /* [in] */ unsigned32 func_type,
    /* [in] */ idl_void_p_t args,
    /* [in] */ void (*eval_func)(
    /* [out] */ handle_t binding_h,
    /* [out] */ idl_void_p_t args,
    /* [out] */ idl_void_p_t *cntx
),
    /* [in] */ void (*cs_free_func)(
    /* [out] */ idl_void_p_t cntx
),
    /* [out] */ error_status_t *status
);
extern void rpc_cs_eval_with_universal(
    /* [in] */ handle_t binding_h,
    /* [in] */ idl_void_p_t args,
    /* [in, out] */ idl_void_p_t *cntx
);
extern void rpc_cs_eval_without_universal(
    /* [in] */ handle_t binding_h,
    /* [in] */ idl_void_p_t args,
    /* [in, out] */ idl_void_p_t *cntx
);
extern void rpc_cs_char_set_compat_check(
    /* [in] */ unsigned32 client_codeset,
    /* [in] */ unsigned32 server_codeset,
    /* [out] */ error_status_t *status
);
typedef struct  {
unsigned32 stag;
unsigned32 drtag;
unsigned16 stag_max_bytes;
unsigned32 client_tag;
unsigned16 client_max_bytes;
rpc_ns_handle_t type_handle;
} rpc_cs_tags_eval_t;
typedef rpc_cs_tags_eval_t *rpc_cs_tags_eval_p_t;
typedef struct  {
unsigned32 method;
rpc_cs_tags_eval_t tags;
rpc_codeset_mgmt_t *server;
rpc_codeset_mgmt_t *client;
boolean32 fixed;
void (*cs_stub_eval_func)(
    /* [out] */ unsigned32 *p_stag,
    /* [out] */ unsigned32 *p_drtag,
    /* [out] */ error_status_t *status
);
} rpc_cs_method_eval_t;
typedef rpc_cs_method_eval_t *rpc_cs_method_eval_p_t;
typedef struct  {
idl_short_int key;
union  {
/* case(s): 0 */
rpc_cs_tags_eval_t tags_key;
/* case(s): 1, default */
rpc_cs_method_eval_t method_key;
} tagged_union;
} rpc_cs_evaluation_t;
typedef struct rpc_eval_lists *rpc_cs_eval_list_p;
typedef struct rpc_eval_lists {
unsigned32 type;
void (*eval_func)(
    /* [out] */ handle_t binding_h,
    /* [out] */ idl_void_p_t args,
    /* [out] */ idl_void_p_t *cntx
);
void (*cs_free_func)(
    /* [out] */ idl_void_p_t cntx
);
idl_void_p_t args;
idl_void_p_t cntx;
rpc_cs_eval_list_p next;
} rpc_cs_eval_list_t;
typedef rpc_cs_eval_list_t *rpc_cs_eval_list_p_t;
extern void rpc_cs_binding_set_tags(
    /* [in, out] */ rpc_binding_handle_t *h,
    /* [in] */ unsigned32 stag,
    /* [in] */ unsigned32 drtag,
    /* [in] */ unsigned16 stag_max_bytes,
    /* [out] */ error_status_t *status
);
extern void rpc_cs_binding_set_eval(
    /* [in, out] */ rpc_binding_handle_t *h,
    /* [in] */ void (*cs_stub_eval_func)(
    /* [out] */ unsigned32 *p_stag,
    /* [out] */ unsigned32 *p_drtag,
    /* [out] */ error_status_t *status
),
    /* [out] */ error_status_t *status
);
extern void rpc_rgy_get_codesets(
    /* [out] */ rpc_codeset_mgmt_p_t *codesets_p,
    /* [out] */ error_status_t *status
);
extern void rpc_rgy_get_max_bytes(
    /* [in] */ unsigned32 tag,
    /* [out] */ unsigned16 *max_bytes,
    /* [out] */ error_status_t *status
);
extern void dce_cs_loc_to_rgy(
    /* [in] */ idl_char *local_code_set_name,
    /* [out] */ unsigned32 *rgy_code_set_value,
    /* [out] */ unsigned16 *rgy_char_sets_number,
    /* [out] */ unsigned16 **rgy_char_sets_value,
    /* [out] */ error_status_t *status
);
extern void dce_cs_rgy_to_loc(
    /* [in] */ unsigned32 rgy_code_set_value,
    /* [out] */ idl_char **local_code_set_name,
    /* [out] */ unsigned16 *rgy_char_sets_number,
    /* [out] */ unsigned16 **rgy_char_sets_value,
    /* [out] */ error_status_t *status
);
extern void rpc_ns_mgmt_free_attr_data(
    /* [in, out] */ idl_byte **value,
    /* [out] */ error_status_t *status
);
extern void rpc_ns_mgmt_free_codesets(
    /* [in, out] */ rpc_codeset_mgmt_p_t *codesets,
    /* [out] */ error_status_t *status
);
extern void rpc_impersonate_named_pipe_client(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned32 *status
);
extern void rpc_revert_to_self(
    /* [in] */ rpc_binding_handle_t binding_handle,
    /* [out] */ unsigned32 *status
);

#ifdef __cplusplus
    }
#endif

#endif
