#include "conf.hpp"
#include <iostream>
#include <spdlog/spdlog.h>

int main(int argc, char **argv) {
  spdlog::set_level(spdlog::level::trace);
  std::cout<<"list of configurations:"<<std::endl;
  // const derecho::Conf * pc = derecho::Conf::get();
  // const std::string k("RDMA/provider");
  // const std::string x = pc->getString(k);
  std::cout<<CONF_DERECHO_LOCAL_IP<<"\t"<<(derecho::Conf::get()->getString(CONF_DERECHO_LOCAL_IP))<<std::endl;
  std::cout<<CONF_DERECHO_GMS_PORT<<":\t"<<(derecho::Conf::get()->getString(CONF_DERECHO_GMS_PORT))<<std::endl;
  std::cout<<CONF_DERECHO_RPC_PORT<<":\t"<<(derecho::Conf::get()->getString(CONF_DERECHO_RPC_PORT))<<std::endl;
  std::cout<<CONF_DERECHO_SST_PORT<<":\t"<<(derecho::Conf::get()->getString(CONF_DERECHO_SST_PORT))<<std::endl;
  std::cout<<CONF_DERECHO_RDMC_PORT<<":\t"<<(derecho::Conf::get()->getString(CONF_DERECHO_RDMC_PORT))<<std::endl;
  std::cout<<"RDMA/provider:\t"<<(derecho::Conf::get()->getString("RDMA/provider"))<<std::endl;
  std::cout<<"RDMA/domain:\t"<<(derecho::Conf::get()->getString("RDMA/domain"))<<std::endl;
  std::cout<<"RDMA/rx_depth:\t"<<(derecho::Conf::get()->getInt32("RDMA/rx_depth"))<<std::endl;
  std::cout<<"RDMA/tx_depth:\t"<<(derecho::Conf::get()->getInt32("RDMA/tx_depth"))<<std::endl;
  return 0;
}
