-- MySQL dump 10.13  Distrib 5.5.46, for debian-linux-gnu (x86_64)
--
-- Host: 0.0.0.0    Database: pset7
-- ------------------------------------------------------
-- Server version	5.5.46-0ubuntu0.14.04.2

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `history`
--

DROP TABLE IF EXISTS `history`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `history` (
  `id` int(10) unsigned NOT NULL,
  `transaction` varchar(10) COLLATE utf8_unicode_ci NOT NULL,
  `timestamp` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `symbol` varchar(20) COLLATE utf8_unicode_ci NOT NULL,
  `shares` int(11) unsigned NOT NULL,
  `price` decimal(64,5) unsigned NOT NULL DEFAULT '0.00000',
  KEY `id` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `history`
--

LOCK TABLES `history` WRITE;
/*!40000 ALTER TABLE `history` DISABLE KEYS */;
INSERT INTO `history` VALUES (11,'BUY','2016-07-07 09:01:05','FB',2,116.70000),(11,'SELL','2016-07-07 09:02:00','FB',2,116.70000),(11,'BUY','2016-07-07 09:56:48','FB',1,116.70000),(11,'SELL','2016-07-07 09:57:09','FB',1,116.70000),(11,'BUY','2016-07-07 10:21:54','FB ',2,116.70000),(11,'SELL','2016-07-07 10:31:02','FB ',2,116.70000),(15,'BUY','2016-07-07 10:35:58','FB',3,116.70000),(16,'BUY','2016-07-07 10:40:17','AAPL',2,95.53000),(16,'SELL','2016-07-07 10:40:25','AAPL',2,95.53000);
/*!40000 ALTER TABLE `history` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `portfolios`
--

DROP TABLE IF EXISTS `portfolios`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `portfolios` (
  `id` int(11) NOT NULL,
  `symbol` varchar(20) COLLATE utf8_unicode_ci NOT NULL,
  `shares` int(11) NOT NULL,
  PRIMARY KEY (`id`,`symbol`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_unicode_ci;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `portfolios`
--

LOCK TABLES `portfolios` WRITE;
/*!40000 ALTER TABLE `portfolios` DISABLE KEYS */;
INSERT INTO `portfolios` VALUES (15,'FB',3);
/*!40000 ALTER TABLE `portfolios` ENABLE KEYS */;
UNLOCK TABLES;

--
-- Table structure for table `users`
--

DROP TABLE IF EXISTS `users`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `users` (
  `id` int(10) unsigned NOT NULL AUTO_INCREMENT,
  `username` varchar(255) NOT NULL,
  `hash` varchar(255) NOT NULL,
  `cash` decimal(65,4) unsigned NOT NULL DEFAULT '0.0000',
  PRIMARY KEY (`id`),
  UNIQUE KEY `username` (`username`)
) ENGINE=InnoDB AUTO_INCREMENT=17 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping data for table `users`
--

LOCK TABLES `users` WRITE;
/*!40000 ALTER TABLE `users` DISABLE KEYS */;
INSERT INTO `users` VALUES (1,'andi','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(2,'caesar','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(3,'eli','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(4,'hdan','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(5,'jason','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(6,'john','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(7,'levatich','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(8,'rob','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(9,'skroob','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(10,'zamyla','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(11,'kk','$1$feRy2GNv$GvvwPnM9dRe.9vIH/l9Xg0',10000.0000),(15,'kl','$2y$10$Qm/fqX00C86aHWfmKG4s4.Fuj0GT/UQrx/rB6KGAc2r19JQHR6wQe',9649.9000),(16,'kunal rajora','$2y$10$.hx8IraUuOnw9jvTpoBrUOAV8egjnh8wSjnSL/2Fz2cvs1jKpqeVa',10000.0000);
/*!40000 ALTER TABLE `users` ENABLE KEYS */;
UNLOCK TABLES;
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2016-07-07 10:43:38
